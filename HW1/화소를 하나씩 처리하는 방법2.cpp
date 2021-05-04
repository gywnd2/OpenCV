#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;

int main()
{
	clock_t start, stop;
	start = clock();
	Mat img = imread("C:/repo/OpenCV_lec/HW1/images/1058.jpg", IMREAD_GRAYSCALE);
	imshow("Original Image", img);

	for (int r = 0; r < img.rows; r++) {
		uchar* p = img.ptr<uchar>(r);
		for (int c = 0; c < img.cols; ++c) {
			p[c] = saturate_cast<uchar>(p[c] + 150);
		}
	}
	imshow("New Image", img);
	stop = clock();
	double runTime = (stop - start) / CLOCKS_PER_SEC;
	cout << runTime << endl;
	waitKey(0);

	return 0;
}
