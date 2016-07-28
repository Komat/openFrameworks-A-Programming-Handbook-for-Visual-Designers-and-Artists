#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetColor(0);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofPath curve;
    curve.setStrokeWidth(1);
    curve.setStrokeColor(0);
    curve.moveTo(32, 20);
    curve.bezierTo(80, 5, 80, 75, 30, 75);
    curve.draw();

    ofLine(32, 20, 80, 5);
    ofEllipse(80, 5, 4, 4);
    ofLine(80, 75, 30, 75);
    ofEllipse(80, 75, 4, 4);
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
