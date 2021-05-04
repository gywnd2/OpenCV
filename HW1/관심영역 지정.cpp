#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std; 

int main()
{
	Mat A;
	A = imread("C:/repo/OpenCV_lec/HW1/images/building.jpg", IMREAD_COLOR);

	Rect r(30, 30, 100, 100);
	Mat D = A(r); // �簢���� ����Ͽ� ���� ������ �����Ѵ�. 
	D = Scalar(0, 0, 255);	// ���� ������ ��� ȭ�Ұ� (0, 0, 0)�� �ȴ�. 
	imshow("src", A);
	waitKey();
	return 0;
}
