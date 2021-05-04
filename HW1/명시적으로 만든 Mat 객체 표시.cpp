#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat M(480, 600, CV_8UC3, Scalar(80, 50, 75));
	if (M.empty()) { cout << "������ ���� �� ����" << endl;		return -1; }
	imshow("img", M);

	waitKey(0);
	return 0;
}
