#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    ofSetWindowShape(600, 600);

    ofHideCursor();
    ofBackground(102);
}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {
    ofNoFill();
    ofFill();
    ofSetColor(0);
    ofRect(150, 150, 300, 300);

    ofFill();
    ofSetColor(255);

    if ((mouseX > 150) && (mouseX < 450) &&
            (mouseY > 150) && (mouseY < 450)) {
        ofLine(0, 0, 150, 150);
        ofLine(600, 0, 450, 150);
        ofLine(450, 450, 600, 600);
        ofLine(0, 600, 150, 450);
    } else {
        ofLine(150, 150, 450, 450);
        ofLine(150, 450, 450, 150);
    }

    ofNoFill();
    ofFill();
    ofSetColor(0);
    ofEllipse(mouseX, mouseY, 12, 12);

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
