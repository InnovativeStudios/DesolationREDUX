params["_cursor"];
((count(_cursor getVariable ["APMS_UnlockCode",""]) != 0) && (locked _cursor >= -1) && (_cursor getVariable ["bis_disabled_Door_1",1]) != 0);