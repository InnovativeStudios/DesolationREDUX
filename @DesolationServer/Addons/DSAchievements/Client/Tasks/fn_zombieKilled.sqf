params["_task","_data"];

// no checks | any kill counts
[_task] call DSA_fnc_IncrementTask;
[] call DSA_fnc_checkAchievements;