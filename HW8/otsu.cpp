#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main() {
	Mat src = imread("C:/repo/OpenCV/HW1/images/lenna.jpg", IMREAD_GRAYSCALE);
	Mat blur, th1, th2, th3, th4;
	threshold(src, th1, 127, 255, THRESH_BINARY);
	threshold(src, th2, 0, 255, THRESH_BINARY | THRESH_OTSU);
	Size size = Size(5, 5);
	GaussianBlur(src, blur, size, 0);
	threshold(blur, th3, 0, 255, THRESH_BINARY | THRESH_OTSU);
	imshow("Original", src);
	imshow("Global", th1);
	imshow("Otsu", th2);
	imshow("Otsu after Blurring", th3);
	waitKey();
	return 0;
}