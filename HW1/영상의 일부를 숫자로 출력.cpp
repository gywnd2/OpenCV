#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img = imread("C:/repo/OpenCV_lec/HW1/images/city.jpg");
	imshow("img", img);
	Mat roi(img, Rect(30, 45, 15,15)); // ũ�Ⱑ 2��2 �� �簢���� ����Ͽ� 
					   // ���� ������ �����Ѵ�. 

	cout << "���� �� = " << roi.rows << endl;
	cout << "���� �� = " << roi.cols << endl;
	cout << "roi = " << endl << roi << endl << endl;
	waitKey(0);
	return 0;
}