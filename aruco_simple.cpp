#include <iostream>
#include <aruco/aruco.h>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <cmath>
#include <vector>

using namespace std;
using namespace cv;
using namespace aruco;

int main()
  {
    Mat InImage=imread("arucoTable.jpg",1);
    MarkerDetector MDetector;
    
    vector<Marker> Markers = MDetector.detect(InImage);
    
    for(unsigned int i=0;i<Markers.size();i++)
    {
      cout<<Markers[i]<<endl;
      Markers[i].draw(InImage,Scalar(0,255,0),2);
    }
    namedWindow("in",0);
    imshow("in",InImage);
    waitKey(0);
    
  }
