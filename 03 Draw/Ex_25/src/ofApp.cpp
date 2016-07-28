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
    curve.moveTo(85, 20);
    curve.bezierTo(40, 10, 60, 90, 15, 80);
    curve.draw();

    ofLine(85, 20, 40, 10);
    ofEllipse(40, 10, 4, 4);
    ofLine(60, 90, 15, 80);
    ofEllipse(60, 90, 4, 4);

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
