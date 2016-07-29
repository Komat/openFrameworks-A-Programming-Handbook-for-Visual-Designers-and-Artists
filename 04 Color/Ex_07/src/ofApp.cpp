#include "ofApp.h"

bool isPressed = false;

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetBackgroundAuto(false);
    ofSetWindowShape(100, 100);
    ofSetColor(255, 40);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
    if (isPressed) {
        ofSetColor(0, 26);
    } else {
        ofSetColor(255, 26);
    }
    for (int i = 0; i < 6; i++) {
        ofEllipse(mouseX + i * i, mouseY, i, i);
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
    isPressed = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
    isPressed = false;
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
