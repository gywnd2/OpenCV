#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main() {
	Mat src, dst, open, close;
	src = imread("C:/repo/OpenCV_lec/HW1/images/test.png", IMREAD_GRAYSCALE);
	
	imshow("src", src);

	Mat element = getStructuringElement(MORPH_RECT, Size(5, 5));
	morphologyEx(src, open, MORPH_GRADIENT, element);
	imshow("Gradient Demo", open);
	waitKey(0);
	return 0;
}