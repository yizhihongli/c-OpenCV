#include <opencv2\opencv.hpp>
#include <iostream>

using namespace cv;
int main() {
	Mat src = imread("1.png");//与上面0一样
	namedWindow("原图", WINDOW_AUTOSIZE);
	imshow("原图", src);

	//色彩转换 转换方式特别多
	namedWindow("处理图", WINDOW_AUTOSIZE);
	Mat src2;
	cvtColor(src, src2, COLOR_BGRA2GRAY);
	imshow("处理图", src2);

	//保存图片
	imwrite("src2.jpg", src2);
	waitKey();
	return 0;
}