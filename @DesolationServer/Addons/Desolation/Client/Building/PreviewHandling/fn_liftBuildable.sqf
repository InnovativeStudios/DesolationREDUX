

params["_crate"]; // this is the dynamic preview object

player reveal [_crate, 4]; // make sure we can see it

[_crate] spawn OM_fnc_liftObject;
waitUntil{!isNull OM_var_lifted};
waitUntil{isNull OM_var_lifted};

[_crate] remoteExec ["DS_fnc_buildableDropped",2];