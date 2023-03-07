#include <iostream>
#include <vector>

using namespace std;

class PlayerAccount
{
private:
    string name;
    int score;

public:
    PlayerAccount(string Name, int Score)
    {
        name = Name;
        score = Score;
    }

    void displayDetails()
    {
        cout << name << endl;
        cout << score << endl;
    }
};

void newPlayer(string Name, int Score, vector<PlayerAccount> &players)
{
    // create a new player account
    PlayerAccount playerAccount(Name, Score);

    // insert the into players vector
    players.push_back(playerAccount);
}

void displayPlayers(vector<PlayerAccount> &players)
{
    // iterate through player vector
    for (int i = 0; i < players.size(); i++)
    {
        players[i].displayDetails();
    }
}

int main()
{
    // create vector of players
    vector<PlayerAccount> players;

    // create a new player account
    newPlayer("Patrick Mediodia", 15000, players);

    // call display player information
    displayPlayers(players);

    return 0;
}
