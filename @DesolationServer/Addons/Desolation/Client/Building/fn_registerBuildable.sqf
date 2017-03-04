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
params["_crate"];

[_crate] spawn OM_fnc_liftObject;
waitUntil{!isNull OM_var_lifted};
waitUntil{isNull OM_var_lifted};

_crate setVectorUp [0,0,1];
player reveal [_crate, 4];


//--- this doesnt work everyt now and then.... we need a 3d action on the buildable to build it i guess?


DS_var_playerBuildables pushBack _crate;
