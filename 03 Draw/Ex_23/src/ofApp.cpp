#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(100, 100);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofPath path;
    path.setColor(255);
    path.setStrokeWidth(1);
    path.setStrokeColor(0);
    path.setMode(ofPath::POLYLINES);
    path.arc(20, 20, 14, 14, 0, 225);
    path.draw();

    ofPath path1;
    path1.setColor(255);
    path1.setStrokeWidth(1);
    path1.setStrokeColor(0);
    path1.setMode(ofPath::POLYLINES);
    path1.arc(50, 20, 14, 14, 0, 225);
    path1.close();
    path1.draw();

    ofPath path2;
    path2.setColor(255);
    path2.setStrokeWidth(1);
    path2.setStrokeColor(0);
    path2.arc(80, 20, 14, 14, 0, 225);
    path2.close();
    path2.draw();

    ofPath path3;
    path3.setColor(255);
    path3.setMode(ofPath::POLYLINES);
    path3.arc(20, 50, 14, 14, 0, 225);
    path3.close();
    path3.draw();

    ofPath path4;
    path4.setColor(255);
    path4.setMode(ofPath::POLYLINES);
    path4.arc(50, 50, 14, 14, 0, 225);
    path4.close();
    path4.draw();

    ofPath path5;
    path5.setColor(255);
    path5.arc(80, 50, 14, 14, 0, 225);
    path5.close();
    path5.draw();


    ofPath path6;
    path6.setFilled(false);
    path6.setStrokeWidth(1);
    path6.setStrokeColor(0);
    path6.setMode(ofPath::POLYLINES);
    path6.arc(20, 80, 14, 14, 0, 225);
    path6.draw();

    ofPath path7;
    path7.setFilled(false);
    path7.setStrokeWidth(1);
    path7.setStrokeColor(0);
    path7.setMode(ofPath::POLYLINES);
    path7.arc(50, 80, 14, 14, 0, 225);
    path7.close();
    path7.draw();

    ofPath path8;
    path8.setFilled(false);
    path8.setStrokeWidth(1);
    path8.setStrokeColor(0);
    path8.arc(80, 80, 14, 14, 0, 225);
    path8.close();
    path8.draw();

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
