#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

    x = 320;
    y = 240;
    r = 80;
    speed = 2.0;

    ofSetWindowShape(640, 480);
    ofHideCursor();
    ofBackground(204);
    ofSetColor(126);
    ofSetCircleResolution(64);

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

    ofEllipse(x, y, r, r);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
    if (key == OF_KEY_UP) {
        y -= speed;
    } else if (key == OF_KEY_DOWN) {
        y += speed;
    } else if (key == OF_KEY_LEFT) {
        x -= speed;
    } else if (key == OF_KEY_RIGHT) {
        x += speed;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
