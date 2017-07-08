params["_zIndex","_position"];
_zholder = "Sign_Sphere10Cm_F" createVehicle [0,0,0];
_zholder enableSimulationGlobal false;
_zholder hideObjectGlobal true;
_zholder setVariable ["zIndex",_zIndex];
_zholder setVariable ["isSpawned",false];
_zholder setposatl _position;

_zholder;