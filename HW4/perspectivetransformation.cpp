#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("C:/repo/OpenCV_lec/HW1/images/book.jpg");

	Point2f inputp[4];
	inputp[0] = Point2f(30, 81);
	inputp[1] = Point2f(274, 247);
	inputp[2] = Point2f(150, 20);
	inputp[3] = Point2f(820, 640);


	Point2f outputp[4];
	outputp[0] = Point2f(0, 0);
	outputp[1] = Point2f(0, src.rows);
	outputp[2] = Point2f(src.cols, 0);
	outputp[3] = Point2f(src.cols, src.rows);
	Mat h = getPerspectiveTransform(inputp, outputp);
	Mat out;
	warpPerspective(src, out, h, src.size());

	imshow("Source Image", src);
	imshow("Warped Source Image", out);

	waitKey(0);
}

