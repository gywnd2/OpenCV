#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat M(3, 4, CV_8UC3, Scalar(100, 100, 100));
	cout << "M = " << endl << " " << M << endl << endl;
	return 0;
}
