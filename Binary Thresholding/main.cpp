// Global Binary Thresholding

// the main idea of thresholding is that we look at a certain pixel. if the value of that pixel is > Threshold, the pixel
// gets assigned a max value (255). otherwise gets assigned zero
//            # Binary Threshold
//            if src(x,y) > thresh
//                    dst(x,y) = maxValue
//            else
//            dst(x,y) = 0
//**********************************************************************************************
//Inverse binary thresholding is just the opposite of binary thresholding. The destination pixel is set to
//zero if the corresponding source pixel is greater than the threshold, and to maxValue, if the source pixel
//is less than the threshold.
//            # Inverse Binary Threshold
//            if src(x,y) > thresh
//                    dst(x,y) = 0
//            else
//            dst(x,y) = maxValue
//**********************************************************************************************
//In this type of thresholding, the destination pixel is set to the threshold ( thresh ) if the source pixel
//value is greater than the threshold. Otherwise, it is set to the source pixel value. maxValue is ignored.

//            # Truncate Threshold
//            if src(x,y) > thresh
//                    dst(x,y) = thresh
//            else
//            dst(x,y) = src(x,y)

//**********************************************************************************************

//the destination pixel value is set to the corresponding source pixel value if the source pixel value is
//greater than the threshold. Otherwise, it is set to zero. maxValue is ignored.
//            # Threshold to Zero
//            if src(x,y) > thresh
//                    dst(x,y) = src(x,y)
//            else
//            dst(x,y) = 0

//**********************************************************************************************

//the destination pixel value is set to zero if the source pixel value is greater than the threshold.
//Otherwise, it is set to the source pixel value.

//            # Inverted Threshold to Zero
//            if src(x,y) > thresh
//                    dst(x,y) = 0
//            else
//            dst(x,y) = src(x,y)

//**********************************************************************************************

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
