#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int threshold_value = 128;
int threshold_type = 0;
const int max_value = 255;
const int max_binary_value = 255;
Mat src, src_gray, dst;

static void MyThreshold(int, void*) {
	threshold(src, dst, threshold_value, max_binary_value, threshold_type);
	imshow("result", dst);
}

int main() {
	src = imread("C:/repo/OpenCV/HW1/images/lenna.jpg", IMREAD_GRAYSCALE);
	namedWindow("result", WINDOW_AUTOSIZE);
	createTrackbar("�Ӱ谪", "result", &threshold_value, max_value, MyThreshold);
	MyThreshold(0, 0);
	waitKey();
	return 0;
}