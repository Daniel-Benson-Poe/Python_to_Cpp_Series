class Character():
    """ A class that holds character information """

    def __init__(self, name="", race="", specialty="", hp=0, mp=0):
        self.name = name
        self.race = race
        self.specialty = specialty
        self.hp = hp
        self.mp = mp

    def set_name(self):
        """ Sets character name """
        print("What is your name?")
        self.name = input()

    def set_race(self):
        """ Sets character race """
        print("What is your race? Choose between human, elf, or dwarf.")
        self.race = input()

    def set_specialty(self):
        """ Sets character class/specialty """
        print("What is your specialty (or class)? Choose between warrior, mage, or rogue.")
        self.specialty = input()

    def set_hp(self):
        if self.specialty == "Warrior":
            self.hp = 25
        elif self.specialty == "Mage":
            self.hp = 15
        elif self.specialty == "Rogue":
            self.hp = 20
        print(f"You have {self.hp} hit points.")

    def set_mp(self):
        if self.specialty == "Warrior":
            self.mp = 5
        elif self.specialty == "Mage":
            self.mp = 15
        elif self.specialty == "Rogue":
            self.mp = 10
        print(f"You have {self.mp} magic points.")

    def view_character_stats(self):
        print(f"Name: {self.name}")
        print(f"Race: {self.race}")
        print(f"Class: {self.specialty}")
        print(f"HP: {self.hp}")
        print(f"MP: {self.mp}")


newChar = Character()
newChar.set_name()
newChar.set_race()
newChar.set_specialty()
newChar.set_hp()
newChar.set_mp()
newChar.view_character_stats()