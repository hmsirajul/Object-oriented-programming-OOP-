#include <iostream>
#include <string>
using namespace std;

class House {

    string houseName;
    string sigil;
    string motto;

public:
    House(const string& name, const string& sig, const string& mot)
        : houseName(name), sigil(sig), motto(mot) {}

    void displayHouseInfo() {
        cout << "House Name: " << houseName << endl;
        cout << "Sigil: " << sigil << endl;
        cout << "Motto: " << motto << endl;
    }
};

class Personality {

    string characterName;
    string alignment;
    string traits;

public:
    Personality(const string& name, const string& align, const string& tr)
        : characterName(name), alignment(align), traits(tr) {}

   void displayPersonalityTraits() {
        cout << "Character Name: " << characterName << endl;
        cout << "Alignment: " << alignment << endl;
        cout << "Traits: " << traits << endl;
    }
};

class Skills {

    int combatSkills;
    int leadership;
    string specialAbilities;

public:
    Skills(int combat, int lead, const string& abilities)
        : combatSkills(combat), leadership(lead), specialAbilities(abilities) {}

    void displaySkills() {
        cout << "Combat Skills: " << combatSkills << endl;
        cout << "Leadership: " << leadership << endl;
        cout << "Special Abilities: " << specialAbilities << endl;
    }
};

class GameOfThronesCharacter : public House, public Personality, public Skills {
public:
    GameOfThronesCharacter(const string& houseName, const string& sigil, const string& motto,const string& characterName,
        const string& alignment, const string& traits,int combatSkills, int leadership, const string& specialAbilities)
    : House(houseName, sigil, motto), Personality(characterName, alignment, traits), Skills(combatSkills, leadership, specialAbilities) {}


void displayCharacterInfo()
    {
    displayHouseInfo();
    displayPersonalityTraits();
    displaySkills();
    }
};

int main()
{
    GameOfThronesCharacter character("Stark", "Direwolf", "Winter is Coming","Jon Snow", "Good", "Honorable, Brave", 57, 75, "Swordsmanship, Leadership");

    character.displayCharacterInfo();

    return 0;
}


