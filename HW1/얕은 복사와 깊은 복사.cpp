#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

void sub(Mat img)
{
	img = Scalar(50, 50, 50);		// ������ ��� ȭ�Ҹ� 0���� �����. 
}
int main()
{
	Mat A;
	A = imread("C:/repo/OpenCV_lec/HW1/images/lines.jpg", IMREAD_COLOR);

	imshow("before", A);	// �Լ� ȣ�� ���� ������ ǥ���Ѵ�. 
	sub(A);			// �Լ��� ������ �����Ѵ�. 
	imshow("after", A);	// �Լ� ȣ�� �Ŀ� ������ ǥ���Ѵ�. 

	waitKey();
	return 0;
}