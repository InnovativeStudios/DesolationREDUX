

DSA_var_callBackTypes = [];
["player_kills","DSA_fnc_playerKilled"] call DSA_fnc_registerCallbackType; 
["zombie_kills","DSA_fnc_zombieKilled"] call DSA_fnc_registerCallbackType; 
["trees_chopped","DSA_fnc_treeChopped"] call DSA_fnc_registerCallbackType; 


////////
// TODO: receive achievement data from server
////////


////////
// TODO: wait for client to load and check his achievement data (maybe an "onPlayerSpawnSuccess" event?)
////////


////////
// TODO: hook into desolation callback functions for tasks
////////