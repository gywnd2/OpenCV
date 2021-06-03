#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src = imread("C:/repo/OpenCV/HW1/images/building.jpg", 0);
	if (src.empty()) { cout << "cannot open" << endl; return -1; }

	Mat dst, cdst;
	Canny(src, dst, 100, 200);
	imshow("edge", dst);
	cvtColor(dst, cdst, CV_GRAY2BGR);
	vector<Vec4i>lines;
	HoughLinesP(dst, lines, 1, CV_PI / 180, 50, 100, 20);
	for (size_t i = 0; i < lines.size(); i++) {
		Vec4i l = lines[i];
		line(cdst, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0, 0, 255), 3, CV_AA);
	}
	imshow("source", src);
	imshow("detected lines", cdst);
	waitKey();
	return 0;
}