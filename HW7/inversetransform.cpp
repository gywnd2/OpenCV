#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main() {
	Mat img = imread("C:/repo/OpenCV/HW1/images/lenna.jpg", IMREAD_GRAYSCALE);
	Mat img_float, dft1, inversedft, inversedft1;
	img.convertTo(img_float, CV_32F);
	dft(img_float, dft1, DFT_COMPLEX_OUTPUT);

	idft(dft1, inversedft, DFT_SCALE | DFT_REAL_OUTPUT);

	inversedft.convertTo(inversedft1, CV_8U);
	imshow("invertedfft", inversedft1);

	imshow("original", img);
	waitKey(0);
	return 0;
}