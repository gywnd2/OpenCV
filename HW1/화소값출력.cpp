#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("C:/repo/OpenCV_lec/HW1/images/gt4.jpg");
	if (img.empty()) { cout << "������ ���� �� ����" << endl;		return -1; }
	imshow("img", img);

	cout << img << endl;
	waitKey(0);
	return 0;
}
