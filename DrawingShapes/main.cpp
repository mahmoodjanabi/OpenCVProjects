//#include "opencv2/opencv.hpp"
//#include "string"
//
//using namespace cv;
//
//int main(){
//// just some valid rectangle arguments
//    Mat img = imread("/Users/janabi/Desktop/Projects/OpenCVProjects/DrawingShapes/Lena.png");
//
//    imshow("Lena",img);
//    int x = 100;
//    int y = 100;
//    int width = 100;
//    int height = 200;
//// Create a rectangle
//    Rect rect(x, y, width, height);
//
//// Impose the rectangle on our image
//    rectangle(img, rect, cv::Scalar(0, 255, 0)); // Scalar(Blue,Green,Red)
//    imshow("Lena with Rectangle", img);
//    waitKey(0);
//
//
//}

#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;


int main( int argc, char** argv )
{
    // First read an image
    Mat image = imread("/Users/janabi/Desktop/Projects/OpenCVProjects/DrawingShapes/Lena.png");


    //####################(  Draw Line  )##########################
    cv::Point p1(100,100), p2(200,100);
    cv::Scalar colorLine(0,255,0); // Green
    int thicknessLine = 2;

    cv::line(image, p1, p2, colorLine, thicknessLine);

    //####################(  Draw Circle  )#########################
    // unfilled circle
    cv::Point centerCircle1(250,250);
    int radiusCircle = 30;
    cv::Scalar colorCircle1(0,0,255);
    int thicknessCircle1 = 2;

    cv::circle(image, centerCircle1, radiusCircle, colorCircle1, thicknessCircle1);

    // filled circle
    cv::Point centerCircle2(400,100);
    cv::Scalar colorCircle2(0,100,0);

    cv::circle(image, centerCircle2, radiusCircle, colorCircle2, cv::FILLED);

    //####################(  Draw Rectangle  )#######################
    // unfilled
    cv::Point p3(400,400), p4(450,450);
    cv::Scalar colorRectangle1(0,0,255);
    int thicknessRectangle1 = 3;

    cv::rectangle(image, p3, p4, colorRectangle1,thicknessRectangle1);

    //   filled
    cv::Point p5(100,400), p6(150,450);
    cv::Scalar colorRectangle2(255,0,255);

    cv::rectangle(image, p5, p6, colorRectangle2, cv::FILLED);


    //#################( Draw Shapes on Image )######################
    cv::namedWindow( "Display window", cv::WINDOW_AUTOSIZE );
    cv::imshow( "Display window", image );

    cv::waitKey(0);


    return 0;
}