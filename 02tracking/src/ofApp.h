#pragma once

#include "ofMain.h"
#include "ofxPCL.h"
#include "ofxKinect.h"

class ofApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();
	void exit();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
	ofxKinect kinect;
	ofEasyCam easyCam;
	bool toggleWireframe;
	
	vector<ofxPCL::PointXYZRGBCloud> clouds;
	ofxPCL::PointXYZRGBCloud cloud_in, cloud_target;
	int cloudIndex;
	
	vector<vector<ofVec3f> > prevCentroids;
	const int queueMax = 10;
};
