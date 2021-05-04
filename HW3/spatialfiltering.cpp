#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("C:/repo/OpenCV_lec/HW1/images/dog.jpg");
	Mat dst;

	blur(src, dst, Size(11, 11));
	imshow("source", src);
	imshow("result", dst);

	waitKey(0);
	return 0;
}
