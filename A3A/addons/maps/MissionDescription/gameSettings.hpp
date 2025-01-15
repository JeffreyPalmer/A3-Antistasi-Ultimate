respawn = "BASE";
respawnDelay = 15;

// Sets the mode for automatic corpse removal.
corpseManagerMode = 1

// How often the remains collector checks monitored remains for removal. The value can be between 1 and 60.
disposalCheckPeriod = 60

// If the total number of monitored corpses is higher than corpseLimit, 
// the corpses that have been dead for longer than corpseRemovalMinTime will be considered for removal. 
corpseLimit = 25;

// Preserve corpses for this time
corpseRemovalMinTime = 1200;

// Monitored corpses that are dead for longer than corpseRemovalMaxTime will be considered for removal regardless of the corpseLimit. 
corpseRemovalMaxTime = 3600;


aiKills = 0;
disabledAI = 1;
Saving = 0;

class Header
{
	gameType = ANTI;
	minplayers = 1;
	maxplayers = 29;
};

class CfgTaskEnhancements
{
  enable       = 1;
  3d           = 1;
  3dDrawDist   = 3500;
  share        = 1;
  propagate    = 1;
};

//If we have CBA for TFAR, then load the mission's settings.
cba_settings_hasSettingsFile = 1;
