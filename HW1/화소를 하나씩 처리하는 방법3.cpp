#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("C:/repo/OpenCV_lec/HW1/images/1058.jpg", IMREAD_GRAYSCALE);
	imshow("Original Image", img);

	Mat oimage;
	img.convertTo(oimage, -1, 1, 150);

	imshow("New Image", oimage);
	waitKey(0);
	return 0;
}
