#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofPath path;
    path.setStrokeWidth(1);
    path.setStrokeColor(0);
    path.setCircleResolution(60);
    path.arc(50, 55, 50, 50, 0, 90);
    path.close();
    path.draw();

    ofPath path1;
    path1.setStrokeWidth(1);
    path1.setStrokeColor(0);
    path1.setCircleResolution(60);
    path1.arc(50, 55, 60, 60, 90, 180);
    path1.close();
    path1.draw();

    ofPath path2;
    path2.setStrokeWidth(1);
    path2.setStrokeColor(0);
    path2.setCircleResolution(60);
    path2.arc(50, 55, 70, 70, 180, 270);
    path2.close();
    path2.draw();

    ofPath path3;
    path3.setStrokeWidth(1);
    path3.setStrokeColor(0);
    path3.setCircleResolution(60);
    path3.arc(50, 55, 80, 80, 270, 360);
    path3.close();
    path3.draw();

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
