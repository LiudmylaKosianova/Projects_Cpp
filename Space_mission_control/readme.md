## Space mission control

**Base Class: Spacecraft**

***Attributes***:
string missionName,
string launchDate,
string status (e.g., "In Progress," "Completed").
***Methods***:
launch(): Simulates the spacecraft launch.
sendMissionUpdate(): Sends a mission update.
completeMission(): Marks the mission as complete.

**Derived Class: Rocket**

***Unique Attributes***:
double payloadCapacity (in tons)
int numberOfStages
***Methods***:
ignite(): Simulates engine ignition.
separateStage(): Simulates the separation of a rocket stage.
reachOrbit(): Marks the rocket as having reached orbit.
