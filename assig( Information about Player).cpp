#include <iostream>
#include <string>
using namespace std;

class Player
{

    string name;
    int age;
    string country;

public:
    Player(const string& n, int a, const string& c)
    {
        name = n;
        age = a;
        country = c;

    }

    void display()
    {
        cout << "Name: " << name <<endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

class Batsman : public Player
{

    double battingAverage;
    int totalRuns;
    int highestScore;

public:
    Batsman(const string& n, int a, const string& c, double avg, int runs, int highest)
    : Player(n, a, c), battingAverage(avg), totalRuns(runs), highestScore(highest) {}

    void display()
    {
        Player::display();
        cout << "Batting Average: " << battingAverage << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Highest Score: " << highestScore << endl;
    }
};

class Bowler : public Player
{

    double bowlingAverage;
    int wicketsTaken;
    string bowlingStyle;

public:
    Bowler(const string& n, int a, const string& c, double avg, int wickets, const string& style)
        : Player(n, a, c), bowlingAverage(avg), wicketsTaken(wickets), bowlingStyle(style) {}

    void display()
    {
        Player::display();
        cout << "Bowling Average: " << bowlingAverage << endl;
        cout << "Wickets Taken: " << wicketsTaken << endl;
        cout << "Bowling Style: " << bowlingStyle << endl;
    }
};

class SpecialistBatsman : public Batsman
{

    double strikeRate;
    int numberOfCenturies;

public:
    SpecialistBatsman(const string& n, int a, const string& c, double avg, int runs, int highest, double sr, int centuries)
        : Batsman(n, a, c, avg, runs, highest), strikeRate(sr), numberOfCenturies(centuries) {}

    void display()
    {
        Batsman::display();
        cout << "Strike Rate: " << strikeRate << endl;
        cout << "Number of Centuries: " << numberOfCenturies << endl;
    }
};

int main()
{
    Bowler bowler("Dale Steyn", 28, "South Africa", 26.5, 150, "Fast");
    SpecialistBatsman batsman("AB de Villiers", 35, "South Africa", 45.7, 7000, 189, 85.3, 01);

    cout << "Bowler information  Details:" << endl;
    bowler.display();

    cout << "\nBatsman information Details:" << endl;
    batsman.display();

    return 0;
}
