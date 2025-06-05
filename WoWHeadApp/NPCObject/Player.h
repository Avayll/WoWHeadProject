#pragma once
class Player {
public:
	Player();
	Player(int health, int auto_attack_damage, int movement_speed);
	int _health, _auto_attack_damage, _movement_speed;
};
class Mage : Player {

};
class Warrior : Player {

};
class Bowman : Player {

};
class Rogue : Player {

};