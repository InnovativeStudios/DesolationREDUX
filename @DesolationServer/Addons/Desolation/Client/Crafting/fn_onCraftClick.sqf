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

 // on craft button click
 // check requirements
 // close dialog
 // play stopable crafting animation
 // remove requirements
 // add item


 
_groupIndex = missionNamespace getVariable["CURRENT_GROUP_INDEX",0];
_currentIndex = missionNamespace getVariable["CURRENT_INDEX",0];


_craftableData = missionNamespace getVariable ["CFG_CRAFTABLE_DATA",[]];
_craftableGroups = missionNamespace getVariable ["CFG_CRAFTABLE_GROUPS",[]];

_craftables = _craftableData select _groupIndex;


_entry = _craftables select _currentIndex;
_cInput = _entry select 0;
_cOutput = _entry select 1;
_cRequiredBuildings = _entry select 2;
_cName = _entry select 3;
_cDesc = _entry select 4;
_cPreview = _entry select 5;
_cCondition = _entry select 5;

systemchat ("CRAFTING " + _cName);