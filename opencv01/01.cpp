#include <opencv2\opencv.hpp>
#include <iostream>

using namespace cv;
int main() {
	Mat src = imread("1.png");//ע���� /  �� \ ���Ҳ���ͼƬ
	namedWindow("1", WINDOW_AUTOSIZE);
	imshow("1",src);
	waitKey();
	return 0;
}
