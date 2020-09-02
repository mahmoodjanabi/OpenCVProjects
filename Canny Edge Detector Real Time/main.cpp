#include <opencv2/opencv.hpp>

using namespace cv;
int main() {
    VideoCapture camera(0);
    Mat img, blurred, gray, canny;
    char charCheckForEscKey = 0;
    int low = 50;
    int high = 60;


// this condition has to be here, check for escape key and the camera is open. makes no sense but it has to be here
    while (charCheckForEscKey != 27 && camera.isOpened()){
//        capture a frame
        camera.read(img);
//        convert the frame to a grayscale
        cvtColor(img,gray,COLOR_BGR2GRAY);
//        Use a blur filter to smooth the image and remove some noise
        GaussianBlur(gray,blurred,cv::Size(5, 5),1.4);
//        Use a canny edge detector algorithm to find the lines then display the output
        Canny(blurred,canny,low,high);
        namedWindow("Cam");
        createTrackbar("low","Cam",&low,100);
        createTrackbar("high","Cam",&high,100);
        imshow("Cam",canny);
        charCheckForEscKey = cv::waitKey(1);
    }
}