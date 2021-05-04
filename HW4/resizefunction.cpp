#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("C:/repo/OpenCV_lec/HW1/images/lenna.jpg", IMREAD_COLOR);
	Mat dst = Mat();


	resize(src, dst, Size(), 0.5, 0.5);

	imshow("Image", src);
	imshow("Scaled", dst);
	waitKey(0);
	return 1;
}
