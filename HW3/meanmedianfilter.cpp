#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("C:/repo/OpenCV_lec/HW1/images/lenna.jpg", IMREAD_GRAYSCALE);
	Mat dst(src.size(), CV_8U, Scalar(0));
	if (src.empty()) { return -1; }
	// (1, 1)���� (rows-1, cols-1) ������ ȭ�Ҹ� ó��
	for (int y = 1; y < src.rows - 1; y++) {
		for (int x = 1; x < src.cols - 1; x++) {
			int sum = 0;
			sum += src.at<uchar>(y - 1, x - 1);
			sum += src.at<uchar>(y, x - 1);
			sum += src.at<uchar>(y + 1, x - 1);
			sum += src.at<uchar>(y - 1, x);
			sum += src.at<uchar>(y, x);
			sum += src.at<uchar>(y + 1, x);
			sum += src.at<uchar>(y - 1, x + 1);
			sum += src.at<uchar>(y, x + 1);
			sum += src.at<uchar>(y + 1, x + 1);
			dst.at<uchar>(y, x) = sum / 9;
		}
	}
	imshow("�Է� ����", src);
	imshow("��� ����", dst);
	waitKey();
	return 0;
}