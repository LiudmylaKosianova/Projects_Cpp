## Space mission control

**Base Class: Spacecraft**

***Attributes***:
string missionName,
string launchDate,
string status (e.g., "In Progress," "Completed").
***Methods***:
virtual void launch(): Simulates the spacecraft launch.
virtual void sendMissionUpdate(const std::string &update): Sends a mission update.
virtual void completeMission(): Marks the mission as complete.