/**
 * @description
 * @author komatsu
 * @date 7/27/16
 * @version 0.0.0
 */

#ifndef EX_03_OVERRECT_H
#define EX_03_OVERRECT_H

#include <ofMain.h>

class OverRect {
private:
    int x, y;
    int size;
    int gray;

public:
    OverRect(int xp, int yp, int s);
    void update(int mx, int my);
    void display();
};


#endif //EX_03_OVERRECT_H
