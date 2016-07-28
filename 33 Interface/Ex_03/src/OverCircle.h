/**
 * @description
 * @author komatsu
 * @date 7/27/16
 * @version 0.0.0
 */

#ifndef EX_03_OVERCIRCLE_H
#define EX_03_OVERCIRCLE_H

#include <ofMain.h>

class OverCircle {
private:
    int x, y;
    int diameter;
    int gray;

public:
    OverCircle(int xp, int yp, int d);
    void update(int mx, int my);
    void display(void);
};


#endif //EX_03_OVERCIRCLE_H
