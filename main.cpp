#include "game.h"

using namespace std;

string storyline();

int main() {
    Game game("Shawarma Land", storyline());
    cout << game.getStory();
    cout << endl;
    cout << game.getName();
}

string storyline() {//haha nice try
    fstream file("list.txt", ios::in);
    string story;
    string line;
    while(getline(file, line)) {
        story += line + "\n";
    }
    return story;
}
