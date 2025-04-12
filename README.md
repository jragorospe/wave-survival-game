# Wave Survival Game
This multiplayer framework was built from a blank Unreal Engine project, incorporating systems and techniques I learned from Unreal educators like Tom Looman and Stephen Ulibarri, and Epic Games' sample projects. I’ll be using this repository as a sandbox to experiment with new mechanics and systems and showcase my learning.

# Video
Check out my video here showcasing its features: https://youtu.be/yH9ACc1ip28?feature=shared

# Project Features
* Third-person Action Character Movement
* Enhanced Input
* Interaction Component
* Action System + Attribute Component (similar to Unreal's Gameplay Ability System)
    * Hitscan Attack
    * Projectile Attack (with burning damage-over-time effect and splash damage)
    * Blackhole Attack (with tick damage and radius decal)
    * Teleport Ability
    * Health Attribute
    * Rage Attribute (to use Teleport and Blackhole abilities)
    * Damage Buff
* Event Driven UI
* C++ Framework with Blueprint Layer for Asset Assignment
* GameplayTags to Grant/Block Actions
* Full Multiplayer Support
* GameMode Logic
    * EQS for Spawning Enemies
    * DataTable to Hold Enemy Information
    * DataAssets to Hold Enemy Configurations
* Optimation Implementations
    * Async Loading of UI Icons
    * Async Loading of Enemy Data Assets
* AI
    * Minion AI with Behavior Trees (Roam, Sight Sense, Chase, Attack, Flee and Heal)
    * C++ Custom Behavior Tree Nodes (BT Tasks and Services)
    * EQS for Attack/Cover Locations
* Powerup Pickups (Grant Health, Rage, Double Damage) 
* UI (UMG)
    * Main Menu to Start a Standalone Game or Host/Join a Game
    * Scalable World Widgets (Display Health, Effects, Interaction Text) 
* WIP
    * Object Pooling Subsystem (Projectiles/Enemies)
    * Targetting Ability for Blackhole Attack (Featured in Lyra Sample Game)
    * Melee Enemy Utilizing Anim Notifies and Sphere Traces
    * Backstab Assassinate Showcasing Action Stations
 
# Download
Download the latest build here: https://drive.google.com/file/d/19Svjr2gV0Go9Vp2klUw6cs0uDIy5IUPk/view?usp=sharing.
