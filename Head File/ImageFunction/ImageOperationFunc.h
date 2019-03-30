#pragma once
#pragma warning(disable:4996)

#include <algorithm>
#include <cvaux.h>
#include <math.h>  
#include <cv.h>
#include <opencv2\highgui\highgui.hpp>
#include <opencv.hpp>

#include <process.h> 
#include <cvaux.h>
#include <cv.h>
#include <opencv2\highgui\highgui.hpp>
#include <opencv.hpp>
#include "cxcore.hpp"
#include "build\include\opencv2\core\core.hpp"
#include <cxcore.h>
#include "opencv2/core/core_c.h"
#include "opencv2/highgui/highgui_c.h"
#include <opencv2/ml/ml.hpp>

using namespace cv;

//ͼ��ת��ʽö��
typedef enum
{
	ReversalModeHorizontal, // ˮƽ��ת  
	ReversalModeVertical    // ��ֱ��ת  
}ReversalMode;

// ͼ��ת(����)  
VOID ImageReversal(IN OUT IplImage **p_iplImage, IN ReversalMode mode);
//ת��iplimage��bmpͼ��
void iplImageToBmp(IN IplImage *ipl, IN int nBpp, OUT byte* p_pbyteBmp, OUT int& p_nBmpSize);
//��ȡ��ֵͼ
int Binarization(Mat p_mat, int p_nBinarizationThreshold, Mat* p_matDst);
