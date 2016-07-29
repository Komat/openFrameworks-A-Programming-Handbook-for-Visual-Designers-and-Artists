#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(100, 100);
    ofSetColor(153, 204);
    ofSetLineWidth(12);
    ofBackground(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    ofLine(20, 20, 40, 80);
    ofLine(40, 20, 20, 80);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofLine(60, 20, 80, 80);
    ofLine(80, 20, 60, 80);
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
