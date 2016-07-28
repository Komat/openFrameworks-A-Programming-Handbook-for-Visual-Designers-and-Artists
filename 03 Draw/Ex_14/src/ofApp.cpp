#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){

}

void drawLine() {
    ofTriangle(55, 9, 110, 100, 85, 100);
    ofTriangle(55, 9, 85, 100, 75, 100);
    ofTriangle(-1, 46, 16, 34, -7, 100);
    ofTriangle(16, 34, -7, 100, 40, 100);
}

//--------------------------------------------------------------
void ofApp::draw(){


    ofSetLineWidth(0);
    ofSetColor(255);
    ofFill();
    drawLine();

    ofFill();
    ofSetLineWidth(1);
    ofSetColor(0);
    ofNoFill();
    drawLine();

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
