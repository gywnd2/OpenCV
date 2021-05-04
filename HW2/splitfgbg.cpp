#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat src, dst;

	src = imread("C:/repo/OpenCV_lec/HW1/images/0001.jpg", IMREAD_GRAYSCALE);
	imshow("Image", src);
	if (!src.data) { return -1; }
	Mat threshold_image;
	threshold(src, threshold_image, 50, 100, THRESH_BINARY);
	imshow("Thresholded", threshold_image);
	waitKey(0);
	return 0;
}
