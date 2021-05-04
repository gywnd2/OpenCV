#include <opencv2/opencv.hpp>
using namespace cv;

// ���� ������ �ֿ� ������ ����
Mat src, dst, detected_edges;
int lowThreshold;
int const max_lowThreshold = 100; // max threshold ���� ����
int ratio = 3;
int kernel_size = 3;

static void CannyThreshold(int, void*)
{
	int kernel_size = 3;
	blur(src, detected_edges, Size(3, 3));
	Canny(detected_edges, detected_edges, lowThreshold, lowThreshold * ratio, kernel_size);
	dst = Scalar::all(0);
	src.copyTo(dst, detected_edges);
	imshow("Image", src);
	imshow("Canny", dst);
}
int main()
{
	src = imread("C:/repo/OpenCV_lec/HW1/images/������_gt4.png", IMREAD_GRAYSCALE);
	if (src.empty()) { return -1; }
	dst.create(src.size(), src.type());
	namedWindow("Canny", CV_WINDOW_AUTOSIZE);
	createTrackbar("Min Threshold:", "Canny", &lowThreshold, max_lowThreshold, CannyThreshold);
	CannyThreshold(lowThreshold, 0);
	waitKey(0);
	return 0;
}