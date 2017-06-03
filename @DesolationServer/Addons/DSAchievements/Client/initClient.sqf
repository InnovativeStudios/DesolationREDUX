

DSA_var_callBackTypes = [];
["player_kills","DSA_fnc_playerKilled"] call DSA_fnc_registerCallbackType; 
["zombie_kills","DSA_fnc_zombieKilled"] call DSA_fnc_registerCallbackType; 
["trees_chopped","DSA_fnc_treeChopped"] call DSA_fnc_registerCallbackType; 


waitUntil{!isNil "ACH_DATA"};


////////
// TODO: hook into desolation callback functions for tasks
////////