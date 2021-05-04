#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat A = imread("C:/repo/OpenCV_lec/HW1/images/1056.jpg");
	Mat B = imread("C:/repo/OpenCV_lec/HW1/images/logo.png");
	Mat roi(A, Rect(A.cols - B.cols, 0, B.cols, B.rows));
	B.copyTo(roi);

	imshow("result", A);
	waitKey(0);
	return 0;
}
