#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
	Mat src;
	src = imread("C:/repo/OpenCV_lec/HW1/images/gt4.jpg", IMREAD_GRAYSCALE);
	imshow("������", src);

	Mat dst;
	dst = 255 - src;
	imshow("����� ����", dst);

	waitKey(0);
	return 0;
}