#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat src, dst, erosion_dst, dilation_dst;
	src = imread("C:/repo/OpenCV_lec/HW1/images/unnamed.jpg");

	threshold(src, dst, 127, 255, THRESH_BINARY);
	imshow("dst", dst);

	Mat element = getStructuringElement(MORPH_RECT, Size(3, 3), Point(-1, -1));
	dilate(dst, dilation_dst, element);
	imshow("Dilation Demo", dilation_dst);
	waitKey(0);
	return 0;
}