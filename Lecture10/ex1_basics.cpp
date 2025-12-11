#include <iostream>
#include <string>

// TODO: Define the RPGCharacter class here
class RPGCharacter {
    // 1. Make member variables private (name, health)
    private:
        std::string name;
        int health;
    // 2. Make constructor public
    public:
        RPGCharacter(const std::string& n, int h) : name(n), health(h) {}

        void take_damage(int dmg) {
            health -= dmg;
            if (health < 0) health = 0;
        }

        bool is_alive() {
            return health > 0;
        }
    
    
    
    // 3. Add take_damage() and is_alive() methods
};

int main() {
    // Test your class
    RPGCharacter hero("Aragorn", 100);
    
    std::cout << "Hero created. Is alive? " << hero.is_alive() << std::endl;
    
    hero.take_damage(120);
    std::cout << "Hero took damage. Is alive? " << hero.is_alive() << std::endl;
    
    return 0;
}