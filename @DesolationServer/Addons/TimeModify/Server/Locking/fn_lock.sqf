


params["_password"];
diag_log ("TimeManagement > Locking Server > Password: " + _password);
_password serverCommand "#lock";
diag_log "TimeManagement > Server Locked";