/*
 * Desolation Redux
 * http://desolationredux.com/
 * © 2016 Desolation Dev Team
 * 
 * This work is licensed under the Arma Public License Share Alike (APL-SA) + Bohemia monetization rights.
 * To view a copy of this license, visit:
 * https://www.bistudio.com/community/licenses/arma-public-license-share-alike/
 * https://www.bistudio.com/monetization/
 */

if(isServer) exitWith {diag_log "FATAL ERROR: CLIENT CODE STARTING ON SERVER";};
 
_enabled = call compile (["Enabled","DS"] call BASE_fnc_getCfgValue);
if(!_enabled) exitWith {diag_log "DESOLATION IS NOT ENABLED, THE PLUGIN WILL NOT RUN";};

0 cutRsc ["background","PLAIN",0];
0 fadeSound 0;
0 fadeMusic 0;

if(worldName == "Chernarus") then {
	"ColorCorrections" ppEffectEnable true; 
	"ColorCorrections" ppEffectAdjust [0.95, 0.8, -0.001, [-0.5, -0.5, -0.5, 0], [0.15, 0.15, 0.15, 0.89], [-0.4, 0.1, 0.5, -0.5]]; 
	"ColorCorrections" ppEffectCommit 0;
};

//antiGammaCheat
DS_AntiGammaFilter = ppEffectCreate ["FilmGrain",2000];
DS_AntiGammaFilter ppEffectEnable false;
DS_AntiGammaFilter ppEffectAdjust [0.02,0.75,2.95,1.66,2,true];
DS_AntiGammaFilter ppEffectCommit 0;


//	Disable automatic refueling from gas pumps
_mapCenter = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition");
{_x setFuelCargo 0;} foreach (nearestTerrainObjects [_mapCenter, ["FUELSTATION"], 35000]);

{
	_x call BASE_fnc_createLocation;
} forEach BASE_var_Locations;


call ds_fnc_initHud;
call ds_fnc_initInvHandler;
call ds_fnc_initHoldables;
[] spawn DS_fnc_initBuilding;
[] spawn DS_fnc_initNVGs;

//asks the server to spawn us

// get client custom loadout data
_clientLoadoutData = uiNamespace getVariable ["DS_LOADOUTDATA",[]];

if(_clientLoadoutData isEqualTo []) then {	
	// no loadout data exists in UI (joined from a3launcher?)
	_clientLoadoutDataProfile = [];
	_clientLoadoutDataProfile pushBack (profileNamespace getVariable ["DS_Default_Uniform","U_C_Poor_2"]);
	_clientLoadoutDataProfile pushBack (profileNamespace getVariable ["DS_Default_Headgear","H_StrawHat"]);
	_clientLoadoutDataProfile pushBack (profileNamespace getVariable ["DS_Default_Goggles","G_Aviator"]);
	
	// update UI with profile loadout data
	uiNamespace setVariable ["DS_LOADOUTDATA",_clientLoadoutDataProfile];
};
// request spawn
[player,uiNamespace getVariable "DS_LOADOUTDATA"] remoteExec ["DS_fnc_requestSpawn", 2];
