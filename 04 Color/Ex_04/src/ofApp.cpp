#include "ofApp.h"

int pmouseX = 0;
int pmouseY = 0;
bool isPressed = false;

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(false);
    ofSetWindowShape(100, 100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    if (isPressed) {
        ofSetColor(255);
    } else {
        ofSetColor(0);
    }
    ofLine(mouseX, mouseY, pmouseX, pmouseY);
    pmouseX = mouseX;
    pmouseY = mouseY;
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
    isPressed = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    isPressed = false;
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
