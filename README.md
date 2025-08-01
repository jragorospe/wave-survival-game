# Wave Survival Game
**A scalable third-person multiplayer shooter framework for Unreal Engine 5, featuring action abilities, attribute systems, AI, and robust multiplayer support.**

<img width="1280" height="661" alt="Wave Survival Game Screenshot" src="https://github.com/user-attachments/assets/02271373-68d8-4d26-8521-0e14cad5c7f2" />
> [Video Showcase](https://youtu.be/yH9ACc1ip28?feature=shared)

## Features
- **Third-Person Action Gameplay:** Responsive character movement and camera control.
- **Enhanced Input System:** Modern Unreal input mapping and handling.
- **Action System + Attribute Component:** Flexible abilities, inspired by Gameplay Ability System (GAS).
- **Abilities:** Hitscan, projectile (with burning/splash), blackhole (AoE tick damage), teleport, buffs, powerups, and targeting.
- **Attribute Management:** Health, Rage, buffs, damage-over-time, and event-driven UI feedback.
- **GameplayTags:** Grant/Block actions dynamically.
- **Multiplayer Support:** Fully networked gameplay, replication-ready.
- **AI:** Minion enemies with custom behavior trees, EQS-based location selection, custom C++ BT nodes, flee/heal, and targeting.
- **Enemy System:** DataTable and DataAssets drive configuration and scaling.
- **Framework Architecture:** Modular C++ code with Blueprint-friendly layers for designers.
- **UI:** Main menu, lobbies, in-game UMG widgets, scalable world HUD, health/effect displays.
- **Optimization:** Async loading for UI and enemy asset data, performance-minded subsystems.
- **Powerups:** Health, rage, damage buffs; pickups with game impact.
- **WIP:** Object pooling subsystem for performance, advanced targeting, backstab/assassinate mechanics, and melee enemy prototypes.
 
## How to Play
Survive waves of enemies using your abilities and buffs. Team up for multiplayer coop and manage your resources to defeat increasingly tough waves of minions.

## Installation
1. **Clone the Repository:**
`git clone https://github.com/jragorospe/wave-survival-game.git`
2. **Open in Unreal Engine:**  
- Use Unreal Engine 5 (version 5.x+ recommended).  
- Open the project `.uproject` file.
3. **Build and Run:**  
- Compile C++ code (regenerate project files if needed).  
- Click "Play" in the UE5 editor or package for your platform.

## Controls
- **Movement:** WASD  
- **Projectile Attack:** Left Mouse Click
- **Hitscan Attack:** Right Mouse Click
- **Blackhole Attack** Middle Mouse Click
- **Teleport** F
- **Interact:** E  
- **Pause/Menu:** Esc

## Tech Stack
- Unreal Engine 5 (C++ & Blueprints)  
- Enhanced Input System  
- Modular Action System (Similar to GAS) 
- GameplayTags  
- Behavior Trees and AI EQS  
- UMG (UI Framework)

## Credits
- Inspired by Unreal community tutorials from Tom Looman, Stephen Ulibarri, and Epic Games sample projects.  
- Original code, systems, and design by Joseph Gorospe.  
- Assets and sound effects provided by Tom Looman.
