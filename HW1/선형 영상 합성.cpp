#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	double alpha = 0.5; double beta; double input;
	Mat src1, src2, dst;
	cout << "���İ��� �Է��Ͻÿ�[0.0-1.0]: ";
	cin >> input;
	src1 = imread("C:/repo/OpenCV_lec/HW1/images/������_gt4.png");
	src2 = imread("C:/repo/OpenCV_lec/HW1/images/������_a12084393.png");
	if (src1.empty()) { cout << "����1�� �ε��� �� �����ϴ�." << endl; return -1; }
	if (src2.empty()) { cout << "����2�� �ε��� �� �����ϴ�." << endl; return -1; }
	beta = (1.0 - alpha);
	addWeighted(src1, alpha, src2, beta, 0.0, dst);
	imshow("Original Image1", src1);
	imshow("Original Image2", src2);
	imshow("���� �ռ�", dst);
	waitKey(0);
	return 0;
}
