#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    int width = ofGetWidth();
    int height = ofGetHeight();

    circle = OverCircle(width / 2, height / 2, 10);

}

//--------------------------------------------------------------
void ofApp::update(){

    int mx = (int)ofRandom(100);
    int my = (int)ofRandom(100);

    circle.update(mx, my);
}

//--------------------------------------------------------------
void ofApp::draw(){
    circle.display();
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
