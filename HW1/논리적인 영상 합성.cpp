#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat img1, mask;

	img1 = imread("C:/repo/OpenCV_lec/HW1/images/scene.jpg", IMREAD_COLOR);
	if (img1.empty()) { cout << "����1�� �ε��� �� �����ϴ�." << endl; return -1; }
	mask = imread("C:/repo/OpenCV_lec/HW1/images/mask.png", IMREAD_COLOR);
	if (mask.empty()) { cout << "����2�� �ε��� �� �����ϴ�." << endl; return -1; }

	Mat dst = img1.clone();
	imshow("img1", img1);
	imshow("mask", mask);

	bitwise_and(img1, mask, dst);
	imshow("dst", dst);
	waitKey(0);
	return 0;
}