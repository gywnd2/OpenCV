#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std; 

int main()
{
	Mat A;
	A = imread("C:/repo/OpenCV_lec/HW1/images/building.jpg", IMREAD_COLOR);

	Rect r(30, 30, 100, 100);
	Mat D = A(r); // 사각형을 사용하여 관심 영역을 지정한다. 
	D = Scalar(0, 0, 255);	// 관심 영역의 모든 화소가 (0, 0, 0)이 된다. 
	imshow("src", A);
	waitKey();
	return 0;
}
