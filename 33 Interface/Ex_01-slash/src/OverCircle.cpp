/**
 * @description
 * @author komatsu
 * @date 7/27/16
 * @version 0.0.0
 */

#include "OverCircle.h"

OverCircle::OverCircle(int xp, int yp, int d) {
    x = xp;
    y = yp;
    diameter = d;
    gray = 0;
}

void OverCircle::update(int mx, int my) {
    if (ofDist(mx, my, x, y) < diameter/2) {
        gray = 255;
    } else {
        gray = 0;
    }
}

void OverCircle::display(void) {
    ofFill();
    ofSetColor(gray);
    ofEllipse(x, y, diameter, diameter);
}
