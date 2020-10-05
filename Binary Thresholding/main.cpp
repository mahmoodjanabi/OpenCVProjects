#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main(int argc, const char** argv){
//  Read Image and convert to grayscale in one step
    Mat img = imread("/Users/janabi/Desktop/Projects/OpenCVProjects/Binary Thresholding/threshold.jpg", IMREAD_GRAYSCALE);

//  Create 2 different places to store resulted images
    Mat binaryThresholding, inverseBinary;
//  Set initial values
    int thresh = 128;
    int maxValue = 255;
    int checkKey = 0;
//    while the esc button is not pressed, do the following
while (checkKey != 27) {
//  Threshold the sorce image into the following:
    threshold(img, binaryThresholding, thresh, maxValue, THRESH_BINARY);
    threshold(img, inverseBinary, thresh, maxValue, THRESH_BINARY_INV);

//  Define windows to show results, and one for the trackbar
    String binaryThreshWindow = "Binary Thresholding";
    String inverseBinaryWindow = "Inverse Binary Thresholding";
    String trackbarWindow = "Trackbars";

    namedWindow(binaryThreshWindow);
    namedWindow(inverseBinaryWindow);
    namedWindow(trackbarWindow);

//  create the trackbar for the thresh and max vaulue
    createTrackbar("Thresh", trackbarWindow, &thresh, 255);
    createTrackbar("Max Value", trackbarWindow, &maxValue, 255);

//  Show results
    imshow(binaryThreshWindow, binaryThresholding);
    imshow(inverseBinaryWindow, inverseBinary);


    checkKey = waitKey(1);
}
}
