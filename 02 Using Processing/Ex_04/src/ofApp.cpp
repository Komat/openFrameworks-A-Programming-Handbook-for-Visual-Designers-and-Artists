#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

    x = 0;
    y = 55;

    ofSetWindowShape(100, 100);
    ofBackground(204);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
    ofLine(x, y, x + 20, y - 40);
    ofLine(x + 10, y, x + 30, y - 40);
    ofLine(x + 20, y, x + 40, y - 40);
    ofLine(x + 30, y, x + 50, y - 40);
    ofLine(x + 40, y, x + 60, y - 40);
    x += 1;
    if (x > 100) {
        x = -40;
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

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
