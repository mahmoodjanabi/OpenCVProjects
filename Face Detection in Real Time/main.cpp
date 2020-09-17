//Given a webcam, it detects the faces present in that feed and draws a rectangle around them

#include <opencv2/opencv.hpp>
#include "vector"
using namespace std;
using namespace cv;

int main( int argc, const char** argv ){

//  use a pretrained cascade classifier to detect faces
// From Wikipedia: "Cascading classifiers are trained with several hundred "positive" sample views of a particular object
// and arbitrary "negative" images of the same size. After the classifier is trained it can be applied to a region of an
// image and detect the object in question. To search for the object in the entire frame, the search window can be moved
// across the image and check every location for the classifier. This process is most commonly used in image processing
// for object detection and tracking, primarily facial detection and recognition. "
    CascadeClassifier faceDetection;

//  start a video capture service, 0 is the default laptop camera
    VideoCapture camera(0);
    Mat img;

    char charCheckForEscKey = 0;

    faceDetection.load("/Users/janabi/Desktop/Projects/OpenCVProjects/Face Detection in Real Time/haarcascade_frontalface_alt.xml");

    while (charCheckForEscKey != 27 && camera.isOpened()){
        camera.read(img);


//  Create a vector of Rect to save the found faces. Rect has 4 parameters (x,y,width,height) where x and y are the top
//  left point of the rectangle. height is the height of the face, width is the width of the face


        vector<Rect> faces;
//  use the pretrained classifier to find all the faces and store them in the vector faces

        faceDetection.detectMultiScale(img, faces);

        //  draw rectangles around all the found faces
        for (int i = 0; i < faces.size(); ++i) {
            Point p1(faces[i].x, faces[i].y);
            Point p2(faces[i].x + faces[i].height, faces[i].y + faces[i].width);
            rectangle(img,p1,p2,Scalar(0,0,255),2,8,0);
        }

        imshow("face", img);

        charCheckForEscKey = cv::waitKey(1);
    }


}
