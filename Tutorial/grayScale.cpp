#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat src = imread("C:/repo/OpenCV/Tutorial2/gt4.jpg", IMREAD_COLOR);
	if (src.empty()) { cout << "������ ���� �� ����" << endl; }
	imshow("src", src);

	Mat gray, edge, output;
	cvtColor(src, gray, CV_BGR2GRAY);

	imshow("gray", gray);
	imwrite("C:/repo/OpenCV/Tutorial2/gt4.jpg", gray);
	waitKey(0);
	return 0;
}