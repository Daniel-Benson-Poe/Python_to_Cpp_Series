#include <iostream>
#include <string>

class Character
{
    public:
        std::string name;
        std::string race;
        std::string specialty;
        int hp;
        int mp;

        std::string setName()
        {
            std::cout << "What is your name?\n";
            std::cin >> name;
            return name;
        };

        std::string setRace()
        {
            std::cout << "What is your race? Choose between human, elf, or dwarf.\n";
            std::cin >> race;
            return race;
        };

        std::string setSpecialty()
        {
            std::cout << "What is your specialty (or class)? Choose between warrior, mage, or rogue.\n";
            std::cin >> specialty;
            return specialty;
        };

        int setHP()
        {

            if (specialty == "Warrior")
            {
                hp = 25;
            }
            else if (specialty == "Mage")
            {
                hp = 15;
            }
            else if (specialty == "Rogue")
            {
                hp = 20;
            }

            std::cout << "Your hp is " << hp << std::endl;
            return hp;
        };

        int setMP()
        {

            if (specialty == "Warrior")
            {
                mp = 5;
            }
            else if (specialty == "Mage")
            {
                mp = 15;
            }
            else if (specialty == "Rogue")
            {
                mp = 10;
            }

            std::cout << "Your mp is " << mp << std::endl;
            return mp;
        };

        void viewCharStats()
        {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Race: " << race << std::endl;
            std::cout << "Class: " << specialty << std::endl;
            std::cout << "HP: " << hp << std::endl;
            std::cout << "MP: " << mp << std::endl;
        }


};

int main()
{
    Character myChar; // Create new character object
    myChar.setName(); // Call setName method
    myChar.setRace(); // Call setRace method
    myChar.setSpecialty(); // Call setSpeciality method
    myChar.setHP(); // Call setHP method
    myChar.setMP(); // Call setMP method
    myChar.viewCharStats(); // Call viewCharStats method

    return 0;
}