#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img = imread("C:/repo/OpenCV/HW1/images/face.jpg");
	Mat img_color;
	applyColorMap(img, img_color, COLORMAP_SPRING);
	imshow("original", img);
	imshow("img_color", img_color);
	waitKey(0);
}