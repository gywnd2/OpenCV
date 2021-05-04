#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img = imread("C:/repo/OpenCV_lec/HW1/images/city.jpg");
	imshow("img", img);
	Mat roi(img, Rect(30, 45, 15,15)); // 크기가 2×2 인 사각형을 사용하여 
					   // 관심 영역을 지정한다. 

	cout << "행의 수 = " << roi.rows << endl;
	cout << "열의 수 = " << roi.cols << endl;
	cout << "roi = " << endl << roi << endl << endl;
	waitKey(0);
	return 0;
}