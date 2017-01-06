#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    maxPanels = 200;
    numPanels = 0;
    rectPanel = new RectPanel[maxPanels];
    
    ofSetBackgroundColor(80,80,80);
    for(int i=0;i<200;i++) {
        rectPanel[i].setRectPanel(ofRandom(0,ofGetWidth()),
                                ofRandom(0,ofGetHeight()),
                                ofRandom(80,120),
                                ofRandom(80,120),
                                ofRandom(0,255),
                                ofRandom(0,255),
                                ofRandom(0,255),
                                ofRandom(0,255));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0;i<numPanels;i++) {
        rectPanel[i].draw();
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
    if (numPanels < maxPanels) {
        rectPanel[numPanels].setRectPanel(x,
                                      y,
                                      ofRandom(80,120),
                                      ofRandom(80,120),
                                      ofRandom(0,255),
                                      ofRandom(0,255),
                                      ofRandom(0,255),
                                      ofRandom(0,100));
        numPanels++;
    }
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
