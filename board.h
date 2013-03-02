#ifndef BOARD_H
#define BOARD_H

class board
{
    public:
        board();
        virtual ~board();
        void render();
        void initialize();
        void update(int move, char icon);
        bool checkwin();
    protected:
    private:
    char box[9];
};

#endif // BOARD_H
