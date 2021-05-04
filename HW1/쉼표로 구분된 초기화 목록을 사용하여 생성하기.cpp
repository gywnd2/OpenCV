#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat C = (Mat_<double>(5, 5) << 1, -1, 3, -5, 12, 1, -1, 3, -5, 12, 1, -1, 3, -5, 12, 1, -1, 3, -5, 12, 1, -1, 3, -5, 12);
	cout << "C = " << endl << C << endl << endl;
	return 0;
}