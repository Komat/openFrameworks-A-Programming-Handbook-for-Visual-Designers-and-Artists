/**
 * @description
 * @author komatsu
 * @date 7/27/16
 * @version 0.0.0
 */

#ifndef EX_01_OVERCIRCLE_H
#define EX_01_OVERCIRCLE_H

#include "ofMain.h"

class OverCircle {
private:
    int x, y;      // The x- and y-coordinates
    int diameter;  // Diameter of the circle
    int gray;      // Gray value

public:
    OverCircle(int xp, int yp, int d);
    void update(int mx, int my);
    void display(void);
};


#endif //EX_01_OVERCIRCLE_H
