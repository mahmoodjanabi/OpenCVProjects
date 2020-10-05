
#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;

int main(int argc, const char** argv){
    VideoCapture camera(0);
    Mat img, gray, blurred, binaryThresholded;
//  Set initial values
    int thresh = 128;
    int maxValue = 255;
    int checkKey = 0;
//    while the esc button is not pressed, do the following
    while (checkKey != 27 && camera.isOpened()) {
//        Read the image, convert to grayscale, Blur to remove some noise, then threshold.
        camera.read(img);
        cvtColor(img,gray, COLOR_BGR2GRAY);
        GaussianBlur(gray,blurred,cv::Size(5, 5),1.4);
        threshold(blurred, binaryThresholded, thresh, maxValue, THRESH_BINARY);

//  Define windows to show results
        String binaryThreshWindow = "Binary Thresholding";

        namedWindow(binaryThreshWindow);

//  create the trackbar for the thresh and max vaulue
        createTrackbar("Thresh", binaryThreshWindow, &thresh, 255);
        createTrackbar("Max Value", binaryThreshWindow, &maxValue, 255);

//  Show results
        imshow(binaryThreshWindow, binaryThresholded);

        checkKey = waitKey(1);
    }
}
