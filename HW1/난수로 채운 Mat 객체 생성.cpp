#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat R = Mat(400, 600, CV_8UC3);
	randu(R, Scalar::all(50), Scalar::all(70));
	imshow("img", R);
	waitKey(0);

	return 0;
}