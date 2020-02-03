//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_XPHOTO

#include <string>

#include "opencv2/xphoto.hpp"

#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/xphoto/include/opencv2/xphoto/inpainting.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/xphoto/include/opencv2/xphoto/dct_image_denoising.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/xphoto/include/opencv2/xphoto/oilpainting.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/xphoto/include/opencv2/xphoto/bm3d_image_denoising.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/xphoto/include/opencv2/xphoto/tonemap.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/xphoto/include/opencv2/xphoto/white_balance.hpp"

#define LOG_TAG "org.opencv.xphoto"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_xphoto
static void throwJavaException(JNIEnv *env, const std::exception *e, const char *method) {
  std::string what = "unknown exception";
  jclass je = 0;

  if(e) {
    std::string exception_type = "std::exception";

    if(dynamic_cast<const cv::Exception*>(e)) {
      exception_type = "cv::Exception";
      je = env->FindClass("org/opencv/core/CvException");
    }

    what = exception_type + ": " + e->what();
  }

  if(!je) je = env->FindClass("java/lang/Exception");
  env->ThrowNew(je, what.c_str());

  LOGE("%s caught %s", method, what.c_str());
  (void)method;        // avoid "unused" warning
}

extern "C" {


//
//  Ptr_GrayworldWB cv::xphoto::createGrayworldWB()
//



JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createGrayworldWB_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createGrayworldWB_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xphoto::createGrayworldWB_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::GrayworldWB> Ptr_GrayworldWB;
        Ptr_GrayworldWB _retval_ = cv::xphoto::createGrayworldWB();
        return (jlong)(new Ptr_GrayworldWB(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_LearningBasedWB cv::xphoto::createLearningBasedWB(String path_to_model = String())
//



JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createLearningBasedWB_10 (JNIEnv*, jclass, jstring);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createLearningBasedWB_10
  (JNIEnv* env, jclass , jstring path_to_model)
{
    static const char method_name[] = "xphoto::createLearningBasedWB_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::LearningBasedWB> Ptr_LearningBasedWB;
        const char* utf_path_to_model = env->GetStringUTFChars(path_to_model, 0); String n_path_to_model( utf_path_to_model ? utf_path_to_model : "" ); env->ReleaseStringUTFChars(path_to_model, utf_path_to_model);
        Ptr_LearningBasedWB _retval_ = cv::xphoto::createLearningBasedWB( n_path_to_model );
        return (jlong)(new Ptr_LearningBasedWB(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createLearningBasedWB_11 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createLearningBasedWB_11
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xphoto::createLearningBasedWB_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::LearningBasedWB> Ptr_LearningBasedWB;
        Ptr_LearningBasedWB _retval_ = cv::xphoto::createLearningBasedWB();
        return (jlong)(new Ptr_LearningBasedWB(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SimpleWB cv::xphoto::createSimpleWB()
//



JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createSimpleWB_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createSimpleWB_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xphoto::createSimpleWB_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::SimpleWB> Ptr_SimpleWB;
        Ptr_SimpleWB _retval_ = cv::xphoto::createSimpleWB();
        return (jlong)(new Ptr_SimpleWB(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_TonemapDurand cv::xphoto::createTonemapDurand(float gamma = 1.0f, float contrast = 4.0f, float saturation = 1.0f, float sigma_space = 2.0f, float sigma_color = 2.0f)
//



JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_10 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_10
  (JNIEnv* env, jclass , jfloat gamma, jfloat contrast, jfloat saturation, jfloat sigma_space, jfloat sigma_color)
{
    static const char method_name[] = "xphoto::createTonemapDurand_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::TonemapDurand> Ptr_TonemapDurand;
        Ptr_TonemapDurand _retval_ = cv::xphoto::createTonemapDurand( (float)gamma, (float)contrast, (float)saturation, (float)sigma_space, (float)sigma_color );
        return (jlong)(new Ptr_TonemapDurand(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_11 (JNIEnv*, jclass, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_11
  (JNIEnv* env, jclass , jfloat gamma, jfloat contrast, jfloat saturation, jfloat sigma_space)
{
    static const char method_name[] = "xphoto::createTonemapDurand_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::TonemapDurand> Ptr_TonemapDurand;
        Ptr_TonemapDurand _retval_ = cv::xphoto::createTonemapDurand( (float)gamma, (float)contrast, (float)saturation, (float)sigma_space );
        return (jlong)(new Ptr_TonemapDurand(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_12 (JNIEnv*, jclass, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_12
  (JNIEnv* env, jclass , jfloat gamma, jfloat contrast, jfloat saturation)
{
    static const char method_name[] = "xphoto::createTonemapDurand_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::TonemapDurand> Ptr_TonemapDurand;
        Ptr_TonemapDurand _retval_ = cv::xphoto::createTonemapDurand( (float)gamma, (float)contrast, (float)saturation );
        return (jlong)(new Ptr_TonemapDurand(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_13 (JNIEnv*, jclass, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_13
  (JNIEnv* env, jclass , jfloat gamma, jfloat contrast)
{
    static const char method_name[] = "xphoto::createTonemapDurand_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::TonemapDurand> Ptr_TonemapDurand;
        Ptr_TonemapDurand _retval_ = cv::xphoto::createTonemapDurand( (float)gamma, (float)contrast );
        return (jlong)(new Ptr_TonemapDurand(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_14 (JNIEnv*, jclass, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_14
  (JNIEnv* env, jclass , jfloat gamma)
{
    static const char method_name[] = "xphoto::createTonemapDurand_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::TonemapDurand> Ptr_TonemapDurand;
        Ptr_TonemapDurand _retval_ = cv::xphoto::createTonemapDurand( (float)gamma );
        return (jlong)(new Ptr_TonemapDurand(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_15 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_xphoto_Xphoto_createTonemapDurand_15
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "xphoto::createTonemapDurand_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::xphoto::TonemapDurand> Ptr_TonemapDurand;
        Ptr_TonemapDurand _retval_ = cv::xphoto::createTonemapDurand();
        return (jlong)(new Ptr_TonemapDurand(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::xphoto::applyChannelGains(Mat src, Mat& dst, float gainB, float gainG, float gainR)
//



JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_applyChannelGains_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jfloat, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_applyChannelGains_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat gainB, jfloat gainG, jfloat gainR)
{
    static const char method_name[] = "xphoto::applyChannelGains_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::applyChannelGains( src, dst, (float)gainB, (float)gainG, (float)gainR );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::bm3dDenoising(Mat src, Mat& dst, float h = 1, int templateWindowSize = 4, int searchWindowSize = 16, int blockMatchingStep1 = 2500, int blockMatchingStep2 = 400, int groupSize = 8, int slidingStep = 1, float beta = 2.0f, int normType = cv::NORM_L2, int step = cv::xphoto::BM3D_STEPALL, int transformType = cv::xphoto::HAAR)
//



JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_10 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint, jfloat, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep, jfloat beta, jint normType, jint step, jint transformType)
{
    static const char method_name[] = "xphoto::bm3dDenoising_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep, (float)beta, (int)normType, (int)step, (int)transformType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_11 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep, jfloat beta, jint normType, jint step)
{
    static const char method_name[] = "xphoto::bm3dDenoising_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep, (float)beta, (int)normType, (int)step );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_12 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_12
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep, jfloat beta, jint normType)
{
    static const char method_name[] = "xphoto::bm3dDenoising_12()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep, (float)beta, (int)normType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_13 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_13
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep, jfloat beta)
{
    static const char method_name[] = "xphoto::bm3dDenoising_13()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep, (float)beta );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_14 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_14
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep)
{
    static const char method_name[] = "xphoto::bm3dDenoising_14()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_15 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_15
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize)
{
    static const char method_name[] = "xphoto::bm3dDenoising_15()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_16 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_16
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2)
{
    static const char method_name[] = "xphoto::bm3dDenoising_16()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_17 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_17
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1)
{
    static const char method_name[] = "xphoto::bm3dDenoising_17()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_18 (JNIEnv*, jclass, jlong, jlong, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_18
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize)
{
    static const char method_name[] = "xphoto::bm3dDenoising_18()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize, (int)searchWindowSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_19 (JNIEnv*, jclass, jlong, jlong, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_19
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h, jint templateWindowSize)
{
    static const char method_name[] = "xphoto::bm3dDenoising_19()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h, (int)templateWindowSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_110 (JNIEnv*, jclass, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_110
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jfloat h)
{
    static const char method_name[] = "xphoto::bm3dDenoising_110()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst, (float)h );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_111 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_111
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "xphoto::bm3dDenoising_111()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::bm3dDenoising( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::bm3dDenoising(Mat src, Mat& dstStep1, Mat& dstStep2, float h = 1, int templateWindowSize = 4, int searchWindowSize = 16, int blockMatchingStep1 = 2500, int blockMatchingStep2 = 400, int groupSize = 8, int slidingStep = 1, float beta = 2.0f, int normType = cv::NORM_L2, int step = cv::xphoto::BM3D_STEPALL, int transformType = cv::xphoto::HAAR)
//



JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_112 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint, jfloat, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_112
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep, jfloat beta, jint normType, jint step, jint transformType)
{
    static const char method_name[] = "xphoto::bm3dDenoising_112()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep, (float)beta, (int)normType, (int)step, (int)transformType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_113 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_113
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep, jfloat beta, jint normType, jint step)
{
    static const char method_name[] = "xphoto::bm3dDenoising_113()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep, (float)beta, (int)normType, (int)step );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_114 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_114
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep, jfloat beta, jint normType)
{
    static const char method_name[] = "xphoto::bm3dDenoising_114()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep, (float)beta, (int)normType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_115 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_115
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep, jfloat beta)
{
    static const char method_name[] = "xphoto::bm3dDenoising_115()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep, (float)beta );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_116 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint, jint, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_116
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize, jint slidingStep)
{
    static const char method_name[] = "xphoto::bm3dDenoising_116()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize, (int)slidingStep );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_117 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_117
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2, jint groupSize)
{
    static const char method_name[] = "xphoto::bm3dDenoising_117()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2, (int)groupSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_118 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_118
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1, jint blockMatchingStep2)
{
    static const char method_name[] = "xphoto::bm3dDenoising_118()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1, (int)blockMatchingStep2 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_119 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_119
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize, jint blockMatchingStep1)
{
    static const char method_name[] = "xphoto::bm3dDenoising_119()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize, (int)searchWindowSize, (int)blockMatchingStep1 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_120 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_120
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize, jint searchWindowSize)
{
    static const char method_name[] = "xphoto::bm3dDenoising_120()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize, (int)searchWindowSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_121 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_121
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h, jint templateWindowSize)
{
    static const char method_name[] = "xphoto::bm3dDenoising_121()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h, (int)templateWindowSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_122 (JNIEnv*, jclass, jlong, jlong, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_122
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj, jfloat h)
{
    static const char method_name[] = "xphoto::bm3dDenoising_122()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2, (float)h );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_123 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_bm3dDenoising_123
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dstStep1_nativeObj, jlong dstStep2_nativeObj)
{
    static const char method_name[] = "xphoto::bm3dDenoising_123()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dstStep1 = *((Mat*)dstStep1_nativeObj);
        Mat& dstStep2 = *((Mat*)dstStep2_nativeObj);
        cv::xphoto::bm3dDenoising( src, dstStep1, dstStep2 );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::dctDenoising(Mat src, Mat dst, double sigma, int psize = 16)
//



JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_dctDenoising_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_dctDenoising_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble sigma, jint psize)
{
    static const char method_name[] = "xphoto::dctDenoising_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::dctDenoising( src, dst, (double)sigma, (int)psize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}





JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_dctDenoising_11 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_dctDenoising_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jdouble sigma)
{
    static const char method_name[] = "xphoto::dctDenoising_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::dctDenoising( src, dst, (double)sigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::inpaint(Mat src, Mat mask, Mat dst, int algorithmType)
//



JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_inpaint_10 (JNIEnv*, jclass, jlong, jlong, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_inpaint_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong mask_nativeObj, jlong dst_nativeObj, jint algorithmType)
{
    static const char method_name[] = "xphoto::inpaint_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& mask = *((Mat*)mask_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::inpaint( src, mask, dst, (int)algorithmType );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::oilPainting(Mat src, Mat& dst, int size, int dynRatio, int code)
//



JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_oilPainting_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_oilPainting_10
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint size, jint dynRatio, jint code)
{
    static const char method_name[] = "xphoto::oilPainting_10()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::oilPainting( src, dst, (int)size, (int)dynRatio, (int)code );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::oilPainting(Mat src, Mat& dst, int size, int dynRatio)
//



JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_oilPainting_11 (JNIEnv*, jclass, jlong, jlong, jint, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_Xphoto_oilPainting_11
  (JNIEnv* env, jclass , jlong src_nativeObj, jlong dst_nativeObj, jint size, jint dynRatio)
{
    static const char method_name[] = "xphoto::oilPainting_11()";
    try {
        LOGD("%s", method_name);
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        cv::xphoto::oilPainting( src, dst, (int)size, (int)dynRatio );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  float cv::xphoto::TonemapDurand::getContrast()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_TonemapDurand_getContrast_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_TonemapDurand_getContrast_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getContrast_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::TonemapDurand>* me = (Ptr<cv::xphoto::TonemapDurand>*) self; //TODO: check for NULL
        return (*me)->getContrast();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::xphoto::TonemapDurand::getSaturation()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_TonemapDurand_getSaturation_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_TonemapDurand_getSaturation_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getSaturation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::TonemapDurand>* me = (Ptr<cv::xphoto::TonemapDurand>*) self; //TODO: check for NULL
        return (*me)->getSaturation();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::xphoto::TonemapDurand::getSigmaColor()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_TonemapDurand_getSigmaColor_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_TonemapDurand_getSigmaColor_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getSigmaColor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::TonemapDurand>* me = (Ptr<cv::xphoto::TonemapDurand>*) self; //TODO: check for NULL
        return (*me)->getSigmaColor();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::xphoto::TonemapDurand::getSigmaSpace()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_TonemapDurand_getSigmaSpace_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_TonemapDurand_getSigmaSpace_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getSigmaSpace_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::TonemapDurand>* me = (Ptr<cv::xphoto::TonemapDurand>*) self; //TODO: check for NULL
        return (*me)->getSigmaSpace();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::xphoto::TonemapDurand::setContrast(float contrast)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_setContrast_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_setContrast_10
  (JNIEnv* env, jclass , jlong self, jfloat contrast)
{
    static const char method_name[] = "xphoto::setContrast_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::TonemapDurand>* me = (Ptr<cv::xphoto::TonemapDurand>*) self; //TODO: check for NULL
        (*me)->setContrast( (float)contrast );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::TonemapDurand::setSaturation(float saturation)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_setSaturation_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_setSaturation_10
  (JNIEnv* env, jclass , jlong self, jfloat saturation)
{
    static const char method_name[] = "xphoto::setSaturation_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::TonemapDurand>* me = (Ptr<cv::xphoto::TonemapDurand>*) self; //TODO: check for NULL
        (*me)->setSaturation( (float)saturation );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::TonemapDurand::setSigmaColor(float sigma_color)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_setSigmaColor_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_setSigmaColor_10
  (JNIEnv* env, jclass , jlong self, jfloat sigma_color)
{
    static const char method_name[] = "xphoto::setSigmaColor_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::TonemapDurand>* me = (Ptr<cv::xphoto::TonemapDurand>*) self; //TODO: check for NULL
        (*me)->setSigmaColor( (float)sigma_color );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::TonemapDurand::setSigmaSpace(float sigma_space)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_setSigmaSpace_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_setSigmaSpace_10
  (JNIEnv* env, jclass , jlong self, jfloat sigma_space)
{
    static const char method_name[] = "xphoto::setSigmaSpace_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::TonemapDurand>* me = (Ptr<cv::xphoto::TonemapDurand>*) self; //TODO: check for NULL
        (*me)->setSigmaSpace( (float)sigma_space );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::xphoto::TonemapDurand>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_TonemapDurand_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xphoto::TonemapDurand>*) self;
}


//
//  float cv::xphoto::GrayworldWB::getSaturationThreshold()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_GrayworldWB_getSaturationThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_GrayworldWB_getSaturationThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getSaturationThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::GrayworldWB>* me = (Ptr<cv::xphoto::GrayworldWB>*) self; //TODO: check for NULL
        return (*me)->getSaturationThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::xphoto::GrayworldWB::setSaturationThreshold(float val)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_GrayworldWB_setSaturationThreshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_GrayworldWB_setSaturationThreshold_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    static const char method_name[] = "xphoto::setSaturationThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::GrayworldWB>* me = (Ptr<cv::xphoto::GrayworldWB>*) self; //TODO: check for NULL
        (*me)->setSaturationThreshold( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::xphoto::GrayworldWB>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xphoto_GrayworldWB_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_GrayworldWB_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xphoto::GrayworldWB>*) self;
}


//
//  float cv::xphoto::LearningBasedWB::getSaturationThreshold()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_LearningBasedWB_getSaturationThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_LearningBasedWB_getSaturationThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getSaturationThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::LearningBasedWB>* me = (Ptr<cv::xphoto::LearningBasedWB>*) self; //TODO: check for NULL
        return (*me)->getSaturationThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::xphoto::LearningBasedWB::getHistBinNum()
//

using namespace cv::xphoto;

JNIEXPORT jint JNICALL Java_org_opencv_xphoto_LearningBasedWB_getHistBinNum_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xphoto_LearningBasedWB_getHistBinNum_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getHistBinNum_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::LearningBasedWB>* me = (Ptr<cv::xphoto::LearningBasedWB>*) self; //TODO: check for NULL
        return (*me)->getHistBinNum();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::xphoto::LearningBasedWB::getRangeMaxVal()
//

using namespace cv::xphoto;

JNIEXPORT jint JNICALL Java_org_opencv_xphoto_LearningBasedWB_getRangeMaxVal_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_xphoto_LearningBasedWB_getRangeMaxVal_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getRangeMaxVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::LearningBasedWB>* me = (Ptr<cv::xphoto::LearningBasedWB>*) self; //TODO: check for NULL
        return (*me)->getRangeMaxVal();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::xphoto::LearningBasedWB::extractSimpleFeatures(Mat src, Mat& dst)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_extractSimpleFeatures_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_extractSimpleFeatures_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "xphoto::extractSimpleFeatures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::LearningBasedWB>* me = (Ptr<cv::xphoto::LearningBasedWB>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->extractSimpleFeatures( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::LearningBasedWB::setHistBinNum(int val)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_setHistBinNum_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_setHistBinNum_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "xphoto::setHistBinNum_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::LearningBasedWB>* me = (Ptr<cv::xphoto::LearningBasedWB>*) self; //TODO: check for NULL
        (*me)->setHistBinNum( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::LearningBasedWB::setRangeMaxVal(int val)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_setRangeMaxVal_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_setRangeMaxVal_10
  (JNIEnv* env, jclass , jlong self, jint val)
{
    static const char method_name[] = "xphoto::setRangeMaxVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::LearningBasedWB>* me = (Ptr<cv::xphoto::LearningBasedWB>*) self; //TODO: check for NULL
        (*me)->setRangeMaxVal( (int)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::LearningBasedWB::setSaturationThreshold(float val)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_setSaturationThreshold_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_setSaturationThreshold_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    static const char method_name[] = "xphoto::setSaturationThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::LearningBasedWB>* me = (Ptr<cv::xphoto::LearningBasedWB>*) self; //TODO: check for NULL
        (*me)->setSaturationThreshold( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::xphoto::LearningBasedWB>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_LearningBasedWB_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xphoto::LearningBasedWB>*) self;
}


//
//  void cv::xphoto::WhiteBalancer::balanceWhite(Mat src, Mat& dst)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_WhiteBalancer_balanceWhite_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_WhiteBalancer_balanceWhite_10
  (JNIEnv* env, jclass , jlong self, jlong src_nativeObj, jlong dst_nativeObj)
{
    static const char method_name[] = "xphoto::balanceWhite_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::WhiteBalancer>* me = (Ptr<cv::xphoto::WhiteBalancer>*) self; //TODO: check for NULL
        Mat& src = *((Mat*)src_nativeObj);
        Mat& dst = *((Mat*)dst_nativeObj);
        (*me)->balanceWhite( src, dst );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::xphoto::WhiteBalancer>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xphoto_WhiteBalancer_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_WhiteBalancer_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xphoto::WhiteBalancer>*) self;
}


//
//  float cv::xphoto::SimpleWB::getInputMax()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getInputMax_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getInputMax_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getInputMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        return (*me)->getInputMax();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::xphoto::SimpleWB::getInputMin()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getInputMin_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getInputMin_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getInputMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        return (*me)->getInputMin();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::xphoto::SimpleWB::getOutputMax()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getOutputMax_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getOutputMax_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getOutputMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        return (*me)->getOutputMax();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::xphoto::SimpleWB::getOutputMin()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getOutputMin_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getOutputMin_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getOutputMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        return (*me)->getOutputMin();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  float cv::xphoto::SimpleWB::getP()
//

using namespace cv::xphoto;

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getP_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jfloat JNICALL Java_org_opencv_xphoto_SimpleWB_getP_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "xphoto::getP_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        return (*me)->getP();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::xphoto::SimpleWB::setInputMax(float val)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setInputMax_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setInputMax_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    static const char method_name[] = "xphoto::setInputMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        (*me)->setInputMax( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::SimpleWB::setInputMin(float val)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setInputMin_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setInputMin_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    static const char method_name[] = "xphoto::setInputMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        (*me)->setInputMin( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::SimpleWB::setOutputMax(float val)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setOutputMax_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setOutputMax_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    static const char method_name[] = "xphoto::setOutputMax_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        (*me)->setOutputMax( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::SimpleWB::setOutputMin(float val)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setOutputMin_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setOutputMin_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    static const char method_name[] = "xphoto::setOutputMin_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        (*me)->setOutputMin( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::xphoto::SimpleWB::setP(float val)
//

using namespace cv::xphoto;

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setP_10 (JNIEnv*, jclass, jlong, jfloat);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_setP_10
  (JNIEnv* env, jclass , jlong self, jfloat val)
{
    static const char method_name[] = "xphoto::setP_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::xphoto::SimpleWB>* me = (Ptr<cv::xphoto::SimpleWB>*) self; //TODO: check for NULL
        (*me)->setP( (float)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::xphoto::SimpleWB>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_xphoto_SimpleWB_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::xphoto::SimpleWB>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_XPHOTO
