#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    num = 20;
    dx[num] = {0};
    dy[num] = {0};


    ofSetWindowShape(100, 100);
    ofBackground(204);

    for (int i = 0; i < num; ++i) {
        dx[i] = i * 5;
        dy[i] = 12 + (i * 6);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < num; i++) {
        dx[i] = dx[i] + 1;
        if (dx[i] > 100) {dx[i] = -100;}
        diagonals(dx[i], dy[i]);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}

void ofApp::diagonals(int x, int y) {
    ofLine(x, y, x + 20, y - 40);
    ofLine(x + 10, y, x + 30, y - 40);
    ofLine(x + 20, y, x + 40, y - 40);
}?
