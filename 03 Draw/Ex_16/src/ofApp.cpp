#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
}

//--------------------------------------------------------------
void ofApp::update(){

}

void drawQuad1() {
  ofVertex(20, 20);
  ofVertex(20, 70);
  ofVertex(60, 90);
  ofVertex(60, 40);
}

void drawQuad2() {
  ofVertex(20, 20);
  ofVertex(70, -20);
  ofVertex(110, 0);
  ofVertex(60, 40);
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBeginShape();
    ofFill();
    ofSetColor(255);
    drawQuad1();
    ofEndShape();

    ofBeginShape();
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(1);
    drawQuad1();
    ofEndShape(true);

    ofBeginShape();
    ofFill();
    ofSetColor(255);
    drawQuad2();
    ofEndShape();

    ofBeginShape();
    ofNoFill();
    ofSetColor(0);
    ofSetLineWidth(1);
    drawQuad2();
    ofEndShape(true);

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
