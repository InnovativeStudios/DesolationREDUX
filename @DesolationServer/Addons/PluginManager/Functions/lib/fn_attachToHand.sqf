params["_classname"];

_obj = _classname createVehicle [0,0,0];
_obj attachTo [player,[-0.05,0,0],"righthandmiddle1"];

// Update thread (this keeps the item tilted) (perhaps move to an onEachFrame/Draw3D thread)
[_obj] spawn {
	params["_obj"];
	while{!isNull _obj} do {
		_upperarm = player selectionPosition "rightforearm";
		_lowerarm = player selectionPosition "rightforearmroll";

		_vectorFromUpToLower = vectorNormalized(_lowerarm vectorDiff _upperarm);
		
		_rotated = [(_vectorFromUpToLower select 0),-1*(_vectorFromUpToLower select 2),(_vectorFromUpToLower select 1)];


		_obj setVectorUp _rotated;
		uiSleep 0.001;
	};
};
_obj;