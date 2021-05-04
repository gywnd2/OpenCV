#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
	double alpha = 1.0;
	int beta = 0;
	Mat image = imread("C:/repo/OpenCV_lec/HW1/images/contrast.jpg");
	Mat oimage = Mat::zeros(image.size(), image.type());
	cout << "���İ��� �Է��Ͻÿ�: [1.0-3.0]: "; cin >> alpha;
	cout << "��Ÿ���� �Է��Ͻÿ�: [0-100]: ";    cin >> beta;
	for (int y = 0; y < image.rows; y++) {
		for (int x = 0; x < image.cols; x++) {
			for (int c = 0; c < 3; c++) {
				oimage.at<Vec3b>(y, x)[c] =
					saturate_cast<uchar>(alpha * (image.at<Vec3b>(y, x)[c]) + beta);
			}
		}
	}
	imshow("Original Image", image);
	imshow("New Image", oimage);
	waitKey();
	return 0;
}
