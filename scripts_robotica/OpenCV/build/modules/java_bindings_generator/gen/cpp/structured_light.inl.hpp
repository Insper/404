//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_STRUCTURED_LIGHT

#include <string>

#include "opencv2/structured_light.hpp"

#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/structured_light/include/opencv2/structured_light/structured_light.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/structured_light/include/opencv2/structured_light/sinusoidalpattern.hpp"
#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/structured_light/include/opencv2/structured_light/graycodepattern.hpp"

#define LOG_TAG "org.opencv.structured_light"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_structured_light
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
// static Ptr_SinusoidalPattern cv::structured_light::SinusoidalPattern::create(Ptr_SinusoidalPattern_Params parameters = makePtr<SinusoidalPattern::Params>())
//

using namespace cv::structured_light;

JNIEXPORT jlong JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_create_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_create_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "structured_1light::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::structured_light::SinusoidalPattern> Ptr_SinusoidalPattern;
        Ptr_SinusoidalPattern _retval_ = cv::structured_light::SinusoidalPattern::create( makePtr<SinusoidalPattern::Params>() );
        return (jlong)(new Ptr_SinusoidalPattern(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::structured_light::SinusoidalPattern::computeDataModulationTerm(vector_Mat patternImages, Mat& dataModulationTerm, Mat shadowMask)
//

using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_computeDataModulationTerm_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_computeDataModulationTerm_10
  (JNIEnv* env, jclass , jlong self, jlong patternImages_mat_nativeObj, jlong dataModulationTerm_nativeObj, jlong shadowMask_nativeObj)
{
    static const char method_name[] = "structured_1light::computeDataModulationTerm_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> patternImages;
        Mat& patternImages_mat = *((Mat*)patternImages_mat_nativeObj);
        Mat_to_vector_Mat( patternImages_mat, patternImages );
        Ptr<cv::structured_light::SinusoidalPattern>* me = (Ptr<cv::structured_light::SinusoidalPattern>*) self; //TODO: check for NULL
        Mat& dataModulationTerm = *((Mat*)dataModulationTerm_nativeObj);
        Mat& shadowMask = *((Mat*)shadowMask_nativeObj);
        (*me)->computeDataModulationTerm( patternImages, dataModulationTerm, shadowMask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::structured_light::SinusoidalPattern::computePhaseMap(vector_Mat patternImages, Mat& wrappedPhaseMap, Mat& shadowMask = Mat(), Mat fundamental = Mat())
//

using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_computePhaseMap_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_computePhaseMap_10
  (JNIEnv* env, jclass , jlong self, jlong patternImages_mat_nativeObj, jlong wrappedPhaseMap_nativeObj, jlong shadowMask_nativeObj, jlong fundamental_nativeObj)
{
    static const char method_name[] = "structured_1light::computePhaseMap_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> patternImages;
        Mat& patternImages_mat = *((Mat*)patternImages_mat_nativeObj);
        Mat_to_vector_Mat( patternImages_mat, patternImages );
        Ptr<cv::structured_light::SinusoidalPattern>* me = (Ptr<cv::structured_light::SinusoidalPattern>*) self; //TODO: check for NULL
        Mat& wrappedPhaseMap = *((Mat*)wrappedPhaseMap_nativeObj);
        Mat& shadowMask = *((Mat*)shadowMask_nativeObj);
        Mat& fundamental = *((Mat*)fundamental_nativeObj);
        (*me)->computePhaseMap( patternImages, wrappedPhaseMap, shadowMask, fundamental );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_computePhaseMap_11 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_computePhaseMap_11
  (JNIEnv* env, jclass , jlong self, jlong patternImages_mat_nativeObj, jlong wrappedPhaseMap_nativeObj, jlong shadowMask_nativeObj)
{
    static const char method_name[] = "structured_1light::computePhaseMap_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> patternImages;
        Mat& patternImages_mat = *((Mat*)patternImages_mat_nativeObj);
        Mat_to_vector_Mat( patternImages_mat, patternImages );
        Ptr<cv::structured_light::SinusoidalPattern>* me = (Ptr<cv::structured_light::SinusoidalPattern>*) self; //TODO: check for NULL
        Mat& wrappedPhaseMap = *((Mat*)wrappedPhaseMap_nativeObj);
        Mat& shadowMask = *((Mat*)shadowMask_nativeObj);
        (*me)->computePhaseMap( patternImages, wrappedPhaseMap, shadowMask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_computePhaseMap_12 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_computePhaseMap_12
  (JNIEnv* env, jclass , jlong self, jlong patternImages_mat_nativeObj, jlong wrappedPhaseMap_nativeObj)
{
    static const char method_name[] = "structured_1light::computePhaseMap_12()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> patternImages;
        Mat& patternImages_mat = *((Mat*)patternImages_mat_nativeObj);
        Mat_to_vector_Mat( patternImages_mat, patternImages );
        Ptr<cv::structured_light::SinusoidalPattern>* me = (Ptr<cv::structured_light::SinusoidalPattern>*) self; //TODO: check for NULL
        Mat& wrappedPhaseMap = *((Mat*)wrappedPhaseMap_nativeObj);
        (*me)->computePhaseMap( patternImages, wrappedPhaseMap );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::structured_light::SinusoidalPattern::findProCamMatches(Mat projUnwrappedPhaseMap, Mat camUnwrappedPhaseMap, vector_Mat& matches)
//

using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_findProCamMatches_10 (JNIEnv*, jclass, jlong, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_findProCamMatches_10
  (JNIEnv* env, jclass , jlong self, jlong projUnwrappedPhaseMap_nativeObj, jlong camUnwrappedPhaseMap_nativeObj, jlong matches_mat_nativeObj)
{
    static const char method_name[] = "structured_1light::findProCamMatches_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> matches;
        Mat& matches_mat = *((Mat*)matches_mat_nativeObj);
        Ptr<cv::structured_light::SinusoidalPattern>* me = (Ptr<cv::structured_light::SinusoidalPattern>*) self; //TODO: check for NULL
        Mat& projUnwrappedPhaseMap = *((Mat*)projUnwrappedPhaseMap_nativeObj);
        Mat& camUnwrappedPhaseMap = *((Mat*)camUnwrappedPhaseMap_nativeObj);
        (*me)->findProCamMatches( projUnwrappedPhaseMap, camUnwrappedPhaseMap, matches );
        vector_Mat_to_Mat( matches, matches_mat );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::structured_light::SinusoidalPattern::unwrapPhaseMap(vector_Mat wrappedPhaseMap, Mat& unwrappedPhaseMap, Size camSize, Mat shadowMask = Mat())
//

using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_unwrapPhaseMap_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_unwrapPhaseMap_10
  (JNIEnv* env, jclass , jlong self, jlong wrappedPhaseMap_mat_nativeObj, jlong unwrappedPhaseMap_nativeObj, jdouble camSize_width, jdouble camSize_height, jlong shadowMask_nativeObj)
{
    static const char method_name[] = "structured_1light::unwrapPhaseMap_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> wrappedPhaseMap;
        Mat& wrappedPhaseMap_mat = *((Mat*)wrappedPhaseMap_mat_nativeObj);
        Mat_to_vector_Mat( wrappedPhaseMap_mat, wrappedPhaseMap );
        Ptr<cv::structured_light::SinusoidalPattern>* me = (Ptr<cv::structured_light::SinusoidalPattern>*) self; //TODO: check for NULL
        Mat& unwrappedPhaseMap = *((Mat*)unwrappedPhaseMap_nativeObj);
        Size camSize((int)camSize_width, (int)camSize_height);
        Mat& shadowMask = *((Mat*)shadowMask_nativeObj);
        (*me)->unwrapPhaseMap( wrappedPhaseMap, unwrappedPhaseMap, camSize, shadowMask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_unwrapPhaseMap_11 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_unwrapPhaseMap_11
  (JNIEnv* env, jclass , jlong self, jlong wrappedPhaseMap_mat_nativeObj, jlong unwrappedPhaseMap_nativeObj, jdouble camSize_width, jdouble camSize_height)
{
    static const char method_name[] = "structured_1light::unwrapPhaseMap_11()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> wrappedPhaseMap;
        Mat& wrappedPhaseMap_mat = *((Mat*)wrappedPhaseMap_mat_nativeObj);
        Mat_to_vector_Mat( wrappedPhaseMap_mat, wrappedPhaseMap );
        Ptr<cv::structured_light::SinusoidalPattern>* me = (Ptr<cv::structured_light::SinusoidalPattern>*) self; //TODO: check for NULL
        Mat& unwrappedPhaseMap = *((Mat*)unwrappedPhaseMap_nativeObj);
        Size camSize((int)camSize_width, (int)camSize_height);
        (*me)->unwrapPhaseMap( wrappedPhaseMap, unwrappedPhaseMap, camSize );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::structured_light::SinusoidalPattern>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_SinusoidalPattern_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::structured_light::SinusoidalPattern>*) self;
}


//
//  bool cv::structured_light::StructuredLightPattern::generate(vector_Mat& patternImages)
//

using namespace cv::structured_light;

JNIEXPORT jboolean JNICALL Java_org_opencv_structured_1light_StructuredLightPattern_generate_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_structured_1light_StructuredLightPattern_generate_10
  (JNIEnv* env, jclass , jlong self, jlong patternImages_mat_nativeObj)
{
    static const char method_name[] = "structured_1light::generate_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> patternImages;
        Mat& patternImages_mat = *((Mat*)patternImages_mat_nativeObj);
        Ptr<cv::structured_light::StructuredLightPattern>* me = (Ptr<cv::structured_light::StructuredLightPattern>*) self; //TODO: check for NULL
        bool _retval_ = (*me)->generate( patternImages );
        vector_Mat_to_Mat( patternImages, patternImages_mat );
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void Ptr<cv::structured_light::StructuredLightPattern>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_structured_1light_StructuredLightPattern_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_StructuredLightPattern_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::structured_light::StructuredLightPattern>*) self;
}


//
//   cv::structured_light::SinusoidalPattern::Params::Params()
//

using namespace cv::structured_light;

JNIEXPORT jlong JNICALL Java_org_opencv_structured_1light_Params_Params_10 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_structured_1light_Params_Params_10
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "structured_1light::Params_10()";
    try {
        LOGD("%s", method_name);
        cv::structured_light::SinusoidalPattern::Params* _retval_ = new cv::structured_light::SinusoidalPattern::Params();
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  native support for java finalize()
//  static void cv::structured_light::SinusoidalPattern::Params::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_structured_1light_Params_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_Params_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::structured_light::SinusoidalPattern::Params*) self;
}


//
// static Ptr_GrayCodePattern cv::structured_light::GrayCodePattern::create(int width, int height)
//

using namespace cv::structured_light;

JNIEXPORT jlong JNICALL Java_org_opencv_structured_1light_GrayCodePattern_create_10 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_structured_1light_GrayCodePattern_create_10
  (JNIEnv* env, jclass , jint width, jint height)
{
    static const char method_name[] = "structured_1light::create_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::structured_light::GrayCodePattern> Ptr_GrayCodePattern;
        Ptr_GrayCodePattern _retval_ = cv::structured_light::GrayCodePattern::create( (int)width, (int)height );
        return (jlong)(new Ptr_GrayCodePattern(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::structured_light::GrayCodePattern::getProjPixel(vector_Mat patternImages, int x, int y, Point& projPix)
//

using namespace cv::structured_light;

JNIEXPORT jboolean JNICALL Java_org_opencv_structured_1light_GrayCodePattern_getProjPixel_10 (JNIEnv*, jclass, jlong, jlong, jint, jint, jdoubleArray);

JNIEXPORT jboolean JNICALL Java_org_opencv_structured_1light_GrayCodePattern_getProjPixel_10
  (JNIEnv* env, jclass , jlong self, jlong patternImages_mat_nativeObj, jint x, jint y, jdoubleArray projPix_out)
{
    static const char method_name[] = "structured_1light::getProjPixel_10()";
    try {
        LOGD("%s", method_name);
        std::vector<Mat> patternImages;
        Mat& patternImages_mat = *((Mat*)patternImages_mat_nativeObj);
        Mat_to_vector_Mat( patternImages_mat, patternImages );
        Ptr<cv::structured_light::GrayCodePattern>* me = (Ptr<cv::structured_light::GrayCodePattern>*) self; //TODO: check for NULL
        Point projPix;
        bool _retval_ = (*me)->getProjPixel( patternImages, (int)x, (int)y, projPix );
        jdouble tmp_projPix[2] = {(jdouble)projPix.x, (jdouble)projPix.y}; env->SetDoubleArrayRegion(projPix_out, 0, 2, tmp_projPix);
        return _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  size_t cv::structured_light::GrayCodePattern::getNumberOfPatternImages()
//

using namespace cv::structured_light;

JNIEXPORT jlong JNICALL Java_org_opencv_structured_1light_GrayCodePattern_getNumberOfPatternImages_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_structured_1light_GrayCodePattern_getNumberOfPatternImages_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "structured_1light::getNumberOfPatternImages_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::structured_light::GrayCodePattern>* me = (Ptr<cv::structured_light::GrayCodePattern>*) self; //TODO: check for NULL
        return (*me)->getNumberOfPatternImages();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::structured_light::GrayCodePattern::getImagesForShadowMasks(Mat& blackImage, Mat& whiteImage)
//

using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_GrayCodePattern_getImagesForShadowMasks_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_GrayCodePattern_getImagesForShadowMasks_10
  (JNIEnv* env, jclass , jlong self, jlong blackImage_nativeObj, jlong whiteImage_nativeObj)
{
    static const char method_name[] = "structured_1light::getImagesForShadowMasks_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::structured_light::GrayCodePattern>* me = (Ptr<cv::structured_light::GrayCodePattern>*) self; //TODO: check for NULL
        Mat& blackImage = *((Mat*)blackImage_nativeObj);
        Mat& whiteImage = *((Mat*)whiteImage_nativeObj);
        (*me)->getImagesForShadowMasks( blackImage, whiteImage );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::structured_light::GrayCodePattern::setBlackThreshold(size_t value)
//

using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_GrayCodePattern_setBlackThreshold_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_GrayCodePattern_setBlackThreshold_10
  (JNIEnv* env, jclass , jlong self, jlong value)
{
    static const char method_name[] = "structured_1light::setBlackThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::structured_light::GrayCodePattern>* me = (Ptr<cv::structured_light::GrayCodePattern>*) self; //TODO: check for NULL
        (*me)->setBlackThreshold( (size_t)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::structured_light::GrayCodePattern::setWhiteThreshold(size_t value)
//

using namespace cv::structured_light;

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_GrayCodePattern_setWhiteThreshold_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_GrayCodePattern_setWhiteThreshold_10
  (JNIEnv* env, jclass , jlong self, jlong value)
{
    static const char method_name[] = "structured_1light::setWhiteThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::structured_light::GrayCodePattern>* me = (Ptr<cv::structured_light::GrayCodePattern>*) self; //TODO: check for NULL
        (*me)->setWhiteThreshold( (size_t)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::structured_light::GrayCodePattern>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_structured_1light_GrayCodePattern_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_structured_1light_GrayCodePattern_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::structured_light::GrayCodePattern>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_STRUCTURED_LIGHT
