/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "opencv2/opencv.hpp"
#define JNICALL
/* Header for class com_example_mypc_vehicledet_OpencvClass */
using namespace cv;
#ifndef _Included_com_example_mypc_vehicledet_OpencvClass
#define _Included_com_example_mypc_vehicledet_OpencvClass
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_mypc_vehicledet_OpencvClass
 * Method:    faceDetection
 * Signature: (J)V
 */
void detect(Mat& frame);
JNIEXPORT void JNICALL Java_com_example_mypc_vehicledet_OpencvClass_vehicleDetection
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif