/**
 * @description
 * @author komatsu
 * @date 7/27/16
 * @version 0.0.0
 */

#include "Element.h"

void Element::load(string imgName) {
    img.loadImage(imgName);
    refresh();
}

void Element::display(void) {

    ofPushMatrix();
    ofTranslate(x, y);
    ofRotate(a);
    img.draw(-(img.getWidth() / 2), -(img.getHeight() / 2));
    ofPopMatrix();

}

void Element::refresh() {

    int width = ofGetWidth();
    int height = ofGetHeight();

    x = ofRandom(width);
    y = ofRandom(height);
    a = ofRandom(0, (float) TWO_PI);
}
