#include <iostream>
using namespace std;

int main() {
int room = 1;
string inventory[4];
string input;
cout << "Welcome to the small but worthy escape room, you start in room 1 and must get out in room 4." << endl;
while (input != "q") {
    switch (room) {
    case 1:
        cout << "You are in room 1, you can go south(s) or press (i) for inventory." << endl;
        cin >> input;
        if (input == "giveall") {
            inventory[0] = "key";
            inventory[1] = "bread";
        }
        else if (input == "s")
            room = 3;
        else if (input == "i") {
            cout << "Here is your inventory:" << endl;
            for (int i = 0; i < 4; i++)
                cout << inventory[i] << endl;
            cout << endl << endl;
        }

        else
            cout << "sorry, not an option" << endl;
        break;
    case 2:
        cout << "You are in room 2, you see a key press 'k' to pick up. You can go east 'e'." << endl;
        cin >> input;
        if (input == "e")
            room = 3;
        else if (input == "i") {
            cout << "Here is your inventory:" << endl;
            for (int i = 0; i < 4; i++)
                cout << inventory[i] << endl;
            cout << endl << endl;
        }
        else if (input.compare("k") == 0) {
            inventory[0] = "key";
            cout << "you picked up the key!" << endl << endl;
        }
        else
            cout << "sorry, not an option" << endl;
        break;
    case 3:
        cout << "You are in room 3, you can go north 'n', east 'e', south 's', or west 'w'. In order to go east/room 4, you need a key." << endl;
        cin >> input;
        if (input == "n")
            room = 1;
        else if (input == "e")
            room = 4;
        else if (input == "s")
            room = 5;
        else if (input == "w")
            room = 2;
        else if (input == "i") {
            cout << "Here is your inventory:" << endl;
            for (int i = 0; i < 4; i++)
                cout << inventory[i] << endl;
            cout << endl << endl;
        }
        else if (input.compare("e") == 0) {
            if (inventory[0].compare("key") != 0)
                cout << "the door is locked" << endl;
            else
                room = 4;
        }
        else
            cout << "sorry not an option" << endl;
        break;
    case 4:
        cout << "You are in room 4, you can go west 'w'. Sorry to break it to you but theres no escape. :/" << endl;
        cin >> input;
        if (input == "w")
            room = 3;
        else if (input == "i") {
            cout << "Here is your inventory:" << endl;
            for (int i = 0; i < 4; i++)
                cout << inventory[i] << endl;
            cout << endl << endl;
        }
        else
            cout << "sorry not an option" << endl;
        break;
    case 5:
        cout << "You are in room 5, you can go north 'n', and you can press 'b' to pick up bread." << endl;
        cin >> input;
        if (input == "n")
            room = 3;
        else if (input == "i") {
            cout << "Here is your inventory:" << endl;
            for (int i = 0; i < 4; i++)
                cout << inventory[i] << endl;
            cout << endl << endl;
        }
        else if (input.compare("b") == 0) {
            inventory[1] = "bread";
            cout << "you picked up the bread!" << endl << endl;
        }
        else
            cout << "sorry not an option" << endl;
        break;
    }
}
}
