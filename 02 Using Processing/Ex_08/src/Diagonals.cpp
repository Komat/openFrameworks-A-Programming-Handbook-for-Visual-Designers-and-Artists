/**
 * @description
 * @author komatsu
 * @date 7/28/16
 * @version 0.0.0
 */

#include "Diagonals.h"

void Diagonals::update() {
    ofSetLineWidth(thick);
    ofFill();
    ofSetColor(gray);
    ofLine(x, y, x + 20, y - 40);
    ofLine(x + 10, y, x + 30, y - 40);
    ofLine(x + 20, y, x + 40, y - 40);
    x = x + speed;
    if (x > 100) {
        x = -100;
    }
}

Diagonals::Diagonals(int xpos, int ypos, int s, int t, int g) {
    x = xpos;
    y = ypos;
    speed = s;
    thick = t;
    gray = g;
}

Diagonals::Diagonals() {

}


