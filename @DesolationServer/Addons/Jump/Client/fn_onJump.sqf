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

/*
	Jump: on key pressed event
*/
params["_unit"];
private["_holding"];

_holding = currentWeapon _unit;

if (_holding == "") then {
	_unit playAction "dsr_noWeap_Jump";
} else {
	if (_holding == (primaryWeapon _unit)) then {
		_unit playAction "dsr_rifle_Jump";
	} else {
		if (_holding == (handGunWeapon _unit)) then {
			_unit playAction "dsr_pistol_Jump";
		} else {
			if (_holding == (secondaryWeapon _unit)) then {
				_unit playAction "dsr_rpg_Jump";
			};
		};
	};
};
