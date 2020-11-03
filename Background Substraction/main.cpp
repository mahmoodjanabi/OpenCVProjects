#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{

    //create Background Subtractor object
    Ptr<BackgroundSubtractor> pBackSub;
    pBackSub = createBackgroundSubtractorMOG2(); // use MOG2
// will be using the webcam as a source
    VideoCapture camera(0);

    Mat frame, fgMask;
    while (true) {
//        read from camera
        camera.read(frame);
        if (frame.empty())
            break;
//        provide the frame and the foreground mask to the function
        //update the background model
        pBackSub->apply(frame, fgMask);
//      show the result of the foreground mask
        imshow("FG Mask", fgMask);
        //get the input from the keyboard
        int keyboard = waitKey(30);
        if (keyboard == 'q' || keyboard == 27)
            break;
    }
    return 0;
}