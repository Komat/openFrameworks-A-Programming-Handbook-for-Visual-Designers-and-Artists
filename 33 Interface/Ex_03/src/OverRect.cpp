/**
 * @description
 * @author komatsu
 * @date 7/27/16
 * @version 0.0.0
 */

#include "OverRect.h"

OverRect::OverRect(int xp, int yp, int s) {
    x = xp;
    y = yp;
    size = s;
    gray = 0;
}

void OverRect::update(int mx, int my) {
    if ((mx > x) && (mx < x + size) && (my > y) && (my < y + size)) {
        gray = 255;
    } else {
        gray = 0;
    }
}

void OverRect::display() {
    ofFill();
    ofSetColor(gray);
    ofEllipse(x, y, size, size);
}
