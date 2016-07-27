#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

    static const string empty_string;

    arraySize = (int) (sizeof(elements) / sizeof(elements[0]));

    ofSetWindowShape(1200, 600);
    ofBackground(0);
    ostringstream oss;

    for (int i = 0; i < arraySize; ++i) {
        oss.clear();
        oss << "nyt_" << ((i + 1) < 10 ? "0" : "") << i + 1 << ".jpg";
        string pathName = oss.str();
        oss.str(empty_string);
        oss.clear();
        oss << dec;
        elements[i].load(pathName);
    }

    ofSetColor(255, 255, 255);

}

//--------------------------------------------------------------
void ofApp::update() {

}

//--------------------------------------------------------------
void ofApp::draw() {

    for (int i = 0; i < arraySize; ++i) {
        elements[i].display();
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
    for (int i = 0; i < arraySize; ++i) {
        elements[i].refresh();
    }
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
