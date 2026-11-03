#include <iostream>
#include "Room.h"
using namespace std;

int main() {

    Room room(5, 10);

    bool isRunning = true;

    while (isRunning) {
        // draw
        room.draw();

        // take user input
        char key;
        cout << "Enter a move (q to quit): ";
        if (!(cin >> key) || key == 'q') {
            isRunning = false;
        }

        // do game things
    }
    return 0;
}