#include <opencv2\opencv.hpp>
#include <iostream>

using namespace cv;
int main() {
	Mat src = imread("1.png");//������0һ��
	namedWindow("ԭͼ", WINDOW_AUTOSIZE);
	imshow("ԭͼ", src);

	//ɫ��ת�� ת����ʽ�ر��
	namedWindow("����ͼ", WINDOW_AUTOSIZE);
	Mat src2;
	cvtColor(src, src2, COLOR_BGRA2GRAY);
	imshow("����ͼ", src2);

	//����ͼƬ
	imwrite("src2.jpg", src2);
	waitKey();
	return 0;
}