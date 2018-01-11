params["_cursor"];
((count(_cursor getVariable ["APMS_UnlockCode",""]) != 0) && (locked _cursor < 2) && (_cursor getVariable ["bis_disabled_Door_1",0]) != 1);