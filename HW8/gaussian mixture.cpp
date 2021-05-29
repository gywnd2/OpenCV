#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;

int main() {
	Mat frame, result;
	Ptr<BackgroundSubtractor>pMOG2;
	int keyboard=0;
	pMOG2 = createBackgroundSubtractorMOG2();
	VideoCapture capture("C:/repo/OpenCV/HW1/images/tennis_ball.avi");
	if (!capture.isOpened()) { exit(EXIT_FAILURE); }
	while ((char)keyboard != 27) {
		if (!capture.read(frame)) {
			exit(EXIT_FAILURE);
		}
		pMOG2->apply(frame, result);
		imshow("Frame", frame);
		imshow("FG Mask MOG2", result);
		keyboard = waitKey(30);
	}
	capture.release();
	return 0;
}