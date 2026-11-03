#ifndef PLAYER_H
#define PLAYER_H

class Room;

class Player {
    private:
        int x = 0;
        int y = 0;

    public:
        bool move(char key, Room * room);
};

#endif