/**
 * @description
 * @author komatsu
 * @date 7/28/16
 * @version 0.0.0
 */

#ifndef EX_08_DIAGONALS_H
#define EX_08_DIAGONALS_H

#include <ofMain.h>

class Diagonals {
private:
    int x, y, speed, thick, gray;
public:
    Diagonals(int xpos, int ypos, int s, int t, int g);

    Diagonals();

    void update();
};


#endif //EX_08_DIAGONALS_H
