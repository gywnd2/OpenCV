#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;

int main()
{

	Mat LoadedImage = imread("C:/repo/OpenCV_lec/HW1/images/coins.png", IMREAD_COLOR);
	imshow("Original Image", LoadedImage);

	resize(LoadedImage, LoadedImage, Size(250, 250));
	imshow("New Image", LoadedImage);
	waitKey(0);
	return 0;
}
