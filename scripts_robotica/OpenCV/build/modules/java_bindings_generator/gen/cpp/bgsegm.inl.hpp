//
// This file is auto-generated. Please don't modify it!
//

#undef LOG_TAG

#include "opencv2/opencv_modules.hpp"
#ifdef HAVE_OPENCV_BGSEGM

#include <string>

#include "opencv2/bgsegm.hpp"

#include "/home/borg/404/scripts_robotica/OpenCV/opencv_contrib/modules/bgsegm/include/opencv2/bgsegm.hpp"

#define LOG_TAG "org.opencv.bgsegm"
#include "common.h"

using namespace cv;

/// throw java exception
#undef throwJavaException
#define throwJavaException throwJavaException_bgsegm
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
//  bool cv::bgsegm::BackgroundSubtractorGMG::getUpdateBackgroundModel()
//

using namespace cv::bgsegm;

JNIEXPORT jboolean JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getUpdateBackgroundModel_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getUpdateBackgroundModel_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getUpdateBackgroundModel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getUpdateBackgroundModel();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::bgsegm::BackgroundSubtractorGMG::getBackgroundPrior()
//

using namespace cv::bgsegm;

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getBackgroundPrior_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getBackgroundPrior_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getBackgroundPrior_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getBackgroundPrior();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::bgsegm::BackgroundSubtractorGMG::getDecisionThreshold()
//

using namespace cv::bgsegm;

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getDecisionThreshold_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getDecisionThreshold_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getDecisionThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getDecisionThreshold();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::bgsegm::BackgroundSubtractorGMG::getDefaultLearningRate()
//

using namespace cv::bgsegm;

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getDefaultLearningRate_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getDefaultLearningRate_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getDefaultLearningRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getDefaultLearningRate();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::bgsegm::BackgroundSubtractorGMG::getMaxVal()
//

using namespace cv::bgsegm;

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getMaxVal_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getMaxVal_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getMaxVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getMaxVal();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::bgsegm::BackgroundSubtractorGMG::getMinVal()
//

using namespace cv::bgsegm;

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getMinVal_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getMinVal_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getMinVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getMinVal();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::bgsegm::BackgroundSubtractorGMG::getMaxFeatures()
//

using namespace cv::bgsegm;

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getMaxFeatures_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getMaxFeatures_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getMaxFeatures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getMaxFeatures();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::bgsegm::BackgroundSubtractorGMG::getNumFrames()
//

using namespace cv::bgsegm;

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getNumFrames_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getNumFrames_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getNumFrames_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getNumFrames();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::bgsegm::BackgroundSubtractorGMG::getQuantizationLevels()
//

using namespace cv::bgsegm;

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getQuantizationLevels_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getQuantizationLevels_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getQuantizationLevels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getQuantizationLevels();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::bgsegm::BackgroundSubtractorGMG::getSmoothingRadius()
//

using namespace cv::bgsegm;

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getSmoothingRadius_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_getSmoothingRadius_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getSmoothingRadius_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        return (*me)->getSmoothingRadius();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setBackgroundPrior(double bgprior)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setBackgroundPrior_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setBackgroundPrior_10
  (JNIEnv* env, jclass , jlong self, jdouble bgprior)
{
    static const char method_name[] = "bgsegm::setBackgroundPrior_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setBackgroundPrior( (double)bgprior );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setDecisionThreshold(double thresh)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setDecisionThreshold_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setDecisionThreshold_10
  (JNIEnv* env, jclass , jlong self, jdouble thresh)
{
    static const char method_name[] = "bgsegm::setDecisionThreshold_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setDecisionThreshold( (double)thresh );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setDefaultLearningRate(double lr)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setDefaultLearningRate_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setDefaultLearningRate_10
  (JNIEnv* env, jclass , jlong self, jdouble lr)
{
    static const char method_name[] = "bgsegm::setDefaultLearningRate_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setDefaultLearningRate( (double)lr );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setMaxFeatures(int maxFeatures)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setMaxFeatures_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setMaxFeatures_10
  (JNIEnv* env, jclass , jlong self, jint maxFeatures)
{
    static const char method_name[] = "bgsegm::setMaxFeatures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setMaxFeatures( (int)maxFeatures );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setMaxVal(double val)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setMaxVal_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setMaxVal_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "bgsegm::setMaxVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setMaxVal( (double)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setMinVal(double val)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setMinVal_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setMinVal_10
  (JNIEnv* env, jclass , jlong self, jdouble val)
{
    static const char method_name[] = "bgsegm::setMinVal_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setMinVal( (double)val );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setNumFrames(int nframes)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setNumFrames_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setNumFrames_10
  (JNIEnv* env, jclass , jlong self, jint nframes)
{
    static const char method_name[] = "bgsegm::setNumFrames_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setNumFrames( (int)nframes );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setQuantizationLevels(int nlevels)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setQuantizationLevels_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setQuantizationLevels_10
  (JNIEnv* env, jclass , jlong self, jint nlevels)
{
    static const char method_name[] = "bgsegm::setQuantizationLevels_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setQuantizationLevels( (int)nlevels );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setSmoothingRadius(int radius)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setSmoothingRadius_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setSmoothingRadius_10
  (JNIEnv* env, jclass , jlong self, jint radius)
{
    static const char method_name[] = "bgsegm::setSmoothingRadius_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setSmoothingRadius( (int)radius );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGMG::setUpdateBackgroundModel(bool update)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setUpdateBackgroundModel_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_setUpdateBackgroundModel_10
  (JNIEnv* env, jclass , jlong self, jboolean update)
{
    static const char method_name[] = "bgsegm::setUpdateBackgroundModel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGMG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self; //TODO: check for NULL
        (*me)->setUpdateBackgroundModel( (bool)update );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::bgsegm::BackgroundSubtractorGMG>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGMG_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::bgsegm::BackgroundSubtractorGMG>*) self;
}


//
//  Ptr_BackgroundSubtractorCNT cv::bgsegm::createBackgroundSubtractorCNT(int minPixelStability = 15, bool useHistory = true, int maxPixelStability = 15*60, bool isParallel = true)
//



JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_10 (JNIEnv*, jclass, jint, jboolean, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_10
  (JNIEnv* env, jclass , jint minPixelStability, jboolean useHistory, jint maxPixelStability, jboolean isParallel)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorCNT_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorCNT> Ptr_BackgroundSubtractorCNT;
        Ptr_BackgroundSubtractorCNT _retval_ = cv::bgsegm::createBackgroundSubtractorCNT( (int)minPixelStability, (bool)useHistory, (int)maxPixelStability, (bool)isParallel );
        return (jlong)(new Ptr_BackgroundSubtractorCNT(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_11 (JNIEnv*, jclass, jint, jboolean, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_11
  (JNIEnv* env, jclass , jint minPixelStability, jboolean useHistory, jint maxPixelStability)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorCNT_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorCNT> Ptr_BackgroundSubtractorCNT;
        Ptr_BackgroundSubtractorCNT _retval_ = cv::bgsegm::createBackgroundSubtractorCNT( (int)minPixelStability, (bool)useHistory, (int)maxPixelStability );
        return (jlong)(new Ptr_BackgroundSubtractorCNT(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_12 (JNIEnv*, jclass, jint, jboolean);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_12
  (JNIEnv* env, jclass , jint minPixelStability, jboolean useHistory)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorCNT_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorCNT> Ptr_BackgroundSubtractorCNT;
        Ptr_BackgroundSubtractorCNT _retval_ = cv::bgsegm::createBackgroundSubtractorCNT( (int)minPixelStability, (bool)useHistory );
        return (jlong)(new Ptr_BackgroundSubtractorCNT(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_13 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_13
  (JNIEnv* env, jclass , jint minPixelStability)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorCNT_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorCNT> Ptr_BackgroundSubtractorCNT;
        Ptr_BackgroundSubtractorCNT _retval_ = cv::bgsegm::createBackgroundSubtractorCNT( (int)minPixelStability );
        return (jlong)(new Ptr_BackgroundSubtractorCNT(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_14 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorCNT_14
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorCNT_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorCNT> Ptr_BackgroundSubtractorCNT;
        Ptr_BackgroundSubtractorCNT _retval_ = cv::bgsegm::createBackgroundSubtractorCNT();
        return (jlong)(new Ptr_BackgroundSubtractorCNT(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_BackgroundSubtractorGMG cv::bgsegm::createBackgroundSubtractorGMG(int initializationFrames = 120, double decisionThreshold = 0.8)
//



JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGMG_10 (JNIEnv*, jclass, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGMG_10
  (JNIEnv* env, jclass , jint initializationFrames, jdouble decisionThreshold)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGMG_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGMG> Ptr_BackgroundSubtractorGMG;
        Ptr_BackgroundSubtractorGMG _retval_ = cv::bgsegm::createBackgroundSubtractorGMG( (int)initializationFrames, (double)decisionThreshold );
        return (jlong)(new Ptr_BackgroundSubtractorGMG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGMG_11 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGMG_11
  (JNIEnv* env, jclass , jint initializationFrames)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGMG_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGMG> Ptr_BackgroundSubtractorGMG;
        Ptr_BackgroundSubtractorGMG _retval_ = cv::bgsegm::createBackgroundSubtractorGMG( (int)initializationFrames );
        return (jlong)(new Ptr_BackgroundSubtractorGMG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGMG_12 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGMG_12
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGMG_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGMG> Ptr_BackgroundSubtractorGMG;
        Ptr_BackgroundSubtractorGMG _retval_ = cv::bgsegm::createBackgroundSubtractorGMG();
        return (jlong)(new Ptr_BackgroundSubtractorGMG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_BackgroundSubtractorGSOC cv::bgsegm::createBackgroundSubtractorGSOC(int mc = LSBP_CAMERA_MOTION_COMPENSATION_NONE, int nSamples = 20, float replaceRate = 0.003f, float propagationRate = 0.01f, int hitsThreshold = 32, float alpha = 0.01f, float beta = 0.0022f, float blinkingSupressionDecay = 0.1f, float blinkingSupressionMultiplier = 0.1f, float noiseRemovalThresholdFacBG = 0.0004f, float noiseRemovalThresholdFacFG = 0.0008f)
//



JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_10 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_10
  (JNIEnv* env, jclass , jint mc, jint nSamples, jfloat replaceRate, jfloat propagationRate, jint hitsThreshold, jfloat alpha, jfloat beta, jfloat blinkingSupressionDecay, jfloat blinkingSupressionMultiplier, jfloat noiseRemovalThresholdFacBG, jfloat noiseRemovalThresholdFacFG)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples, (float)replaceRate, (float)propagationRate, (int)hitsThreshold, (float)alpha, (float)beta, (float)blinkingSupressionDecay, (float)blinkingSupressionMultiplier, (float)noiseRemovalThresholdFacBG, (float)noiseRemovalThresholdFacFG );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_11 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jint, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_11
  (JNIEnv* env, jclass , jint mc, jint nSamples, jfloat replaceRate, jfloat propagationRate, jint hitsThreshold, jfloat alpha, jfloat beta, jfloat blinkingSupressionDecay, jfloat blinkingSupressionMultiplier, jfloat noiseRemovalThresholdFacBG)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples, (float)replaceRate, (float)propagationRate, (int)hitsThreshold, (float)alpha, (float)beta, (float)blinkingSupressionDecay, (float)blinkingSupressionMultiplier, (float)noiseRemovalThresholdFacBG );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_12 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jint, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_12
  (JNIEnv* env, jclass , jint mc, jint nSamples, jfloat replaceRate, jfloat propagationRate, jint hitsThreshold, jfloat alpha, jfloat beta, jfloat blinkingSupressionDecay, jfloat blinkingSupressionMultiplier)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples, (float)replaceRate, (float)propagationRate, (int)hitsThreshold, (float)alpha, (float)beta, (float)blinkingSupressionDecay, (float)blinkingSupressionMultiplier );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_13 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jint, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_13
  (JNIEnv* env, jclass , jint mc, jint nSamples, jfloat replaceRate, jfloat propagationRate, jint hitsThreshold, jfloat alpha, jfloat beta, jfloat blinkingSupressionDecay)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples, (float)replaceRate, (float)propagationRate, (int)hitsThreshold, (float)alpha, (float)beta, (float)blinkingSupressionDecay );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_14 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jint, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_14
  (JNIEnv* env, jclass , jint mc, jint nSamples, jfloat replaceRate, jfloat propagationRate, jint hitsThreshold, jfloat alpha, jfloat beta)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples, (float)replaceRate, (float)propagationRate, (int)hitsThreshold, (float)alpha, (float)beta );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_15 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jint, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_15
  (JNIEnv* env, jclass , jint mc, jint nSamples, jfloat replaceRate, jfloat propagationRate, jint hitsThreshold, jfloat alpha)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples, (float)replaceRate, (float)propagationRate, (int)hitsThreshold, (float)alpha );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_16 (JNIEnv*, jclass, jint, jint, jfloat, jfloat, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_16
  (JNIEnv* env, jclass , jint mc, jint nSamples, jfloat replaceRate, jfloat propagationRate, jint hitsThreshold)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_16()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples, (float)replaceRate, (float)propagationRate, (int)hitsThreshold );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_17 (JNIEnv*, jclass, jint, jint, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_17
  (JNIEnv* env, jclass , jint mc, jint nSamples, jfloat replaceRate, jfloat propagationRate)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_17()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples, (float)replaceRate, (float)propagationRate );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_18 (JNIEnv*, jclass, jint, jint, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_18
  (JNIEnv* env, jclass , jint mc, jint nSamples, jfloat replaceRate)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_18()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples, (float)replaceRate );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_19 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_19
  (JNIEnv* env, jclass , jint mc, jint nSamples)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_19()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc, (int)nSamples );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_110 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_110
  (JNIEnv* env, jclass , jint mc)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_110()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC( (int)mc );
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_111 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorGSOC_111
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorGSOC_111()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorGSOC> Ptr_BackgroundSubtractorGSOC;
        Ptr_BackgroundSubtractorGSOC _retval_ = cv::bgsegm::createBackgroundSubtractorGSOC();
        return (jlong)(new Ptr_BackgroundSubtractorGSOC(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_BackgroundSubtractorLSBP cv::bgsegm::createBackgroundSubtractorLSBP(int mc = LSBP_CAMERA_MOTION_COMPENSATION_NONE, int nSamples = 20, int LSBPRadius = 16, float Tlower = 2.0f, float Tupper = 32.0f, float Tinc = 1.0f, float Tdec = 0.05f, float Rscale = 10.0f, float Rincdec = 0.005f, float noiseRemovalThresholdFacBG = 0.0004f, float noiseRemovalThresholdFacFG = 0.0008f, int LSBPthreshold = 8, int minCount = 2)
//



JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_10 (JNIEnv*, jclass, jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_10
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower, jfloat Tupper, jfloat Tinc, jfloat Tdec, jfloat Rscale, jfloat Rincdec, jfloat noiseRemovalThresholdFacBG, jfloat noiseRemovalThresholdFacFG, jint LSBPthreshold, jint minCount)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower, (float)Tupper, (float)Tinc, (float)Tdec, (float)Rscale, (float)Rincdec, (float)noiseRemovalThresholdFacBG, (float)noiseRemovalThresholdFacFG, (int)LSBPthreshold, (int)minCount );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_11 (JNIEnv*, jclass, jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_11
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower, jfloat Tupper, jfloat Tinc, jfloat Tdec, jfloat Rscale, jfloat Rincdec, jfloat noiseRemovalThresholdFacBG, jfloat noiseRemovalThresholdFacFG, jint LSBPthreshold)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower, (float)Tupper, (float)Tinc, (float)Tdec, (float)Rscale, (float)Rincdec, (float)noiseRemovalThresholdFacBG, (float)noiseRemovalThresholdFacFG, (int)LSBPthreshold );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_12 (JNIEnv*, jclass, jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_12
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower, jfloat Tupper, jfloat Tinc, jfloat Tdec, jfloat Rscale, jfloat Rincdec, jfloat noiseRemovalThresholdFacBG, jfloat noiseRemovalThresholdFacFG)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower, (float)Tupper, (float)Tinc, (float)Tdec, (float)Rscale, (float)Rincdec, (float)noiseRemovalThresholdFacBG, (float)noiseRemovalThresholdFacFG );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_13 (JNIEnv*, jclass, jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_13
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower, jfloat Tupper, jfloat Tinc, jfloat Tdec, jfloat Rscale, jfloat Rincdec, jfloat noiseRemovalThresholdFacBG)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower, (float)Tupper, (float)Tinc, (float)Tdec, (float)Rscale, (float)Rincdec, (float)noiseRemovalThresholdFacBG );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_14 (JNIEnv*, jclass, jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_14
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower, jfloat Tupper, jfloat Tinc, jfloat Tdec, jfloat Rscale, jfloat Rincdec)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower, (float)Tupper, (float)Tinc, (float)Tdec, (float)Rscale, (float)Rincdec );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_15 (JNIEnv*, jclass, jint, jint, jint, jfloat, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_15
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower, jfloat Tupper, jfloat Tinc, jfloat Tdec, jfloat Rscale)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_15()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower, (float)Tupper, (float)Tinc, (float)Tdec, (float)Rscale );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_16 (JNIEnv*, jclass, jint, jint, jint, jfloat, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_16
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower, jfloat Tupper, jfloat Tinc, jfloat Tdec)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_16()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower, (float)Tupper, (float)Tinc, (float)Tdec );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_17 (JNIEnv*, jclass, jint, jint, jint, jfloat, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_17
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower, jfloat Tupper, jfloat Tinc)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_17()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower, (float)Tupper, (float)Tinc );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_18 (JNIEnv*, jclass, jint, jint, jint, jfloat, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_18
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower, jfloat Tupper)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_18()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower, (float)Tupper );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_19 (JNIEnv*, jclass, jint, jint, jint, jfloat);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_19
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius, jfloat Tlower)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_19()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius, (float)Tlower );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_110 (JNIEnv*, jclass, jint, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_110
  (JNIEnv* env, jclass , jint mc, jint nSamples, jint LSBPRadius)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_110()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples, (int)LSBPRadius );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_111 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_111
  (JNIEnv* env, jclass , jint mc, jint nSamples)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_111()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc, (int)nSamples );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_112 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_112
  (JNIEnv* env, jclass , jint mc)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_112()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP( (int)mc );
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_113 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorLSBP_113
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorLSBP_113()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorLSBP> Ptr_BackgroundSubtractorLSBP;
        Ptr_BackgroundSubtractorLSBP _retval_ = cv::bgsegm::createBackgroundSubtractorLSBP();
        return (jlong)(new Ptr_BackgroundSubtractorLSBP(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_BackgroundSubtractorMOG cv::bgsegm::createBackgroundSubtractorMOG(int history = 200, int nmixtures = 5, double backgroundRatio = 0.7, double noiseSigma = 0)
//



JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_10 (JNIEnv*, jclass, jint, jint, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_10
  (JNIEnv* env, jclass , jint history, jint nmixtures, jdouble backgroundRatio, jdouble noiseSigma)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorMOG_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorMOG> Ptr_BackgroundSubtractorMOG;
        Ptr_BackgroundSubtractorMOG _retval_ = cv::bgsegm::createBackgroundSubtractorMOG( (int)history, (int)nmixtures, (double)backgroundRatio, (double)noiseSigma );
        return (jlong)(new Ptr_BackgroundSubtractorMOG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_11 (JNIEnv*, jclass, jint, jint, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_11
  (JNIEnv* env, jclass , jint history, jint nmixtures, jdouble backgroundRatio)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorMOG_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorMOG> Ptr_BackgroundSubtractorMOG;
        Ptr_BackgroundSubtractorMOG _retval_ = cv::bgsegm::createBackgroundSubtractorMOG( (int)history, (int)nmixtures, (double)backgroundRatio );
        return (jlong)(new Ptr_BackgroundSubtractorMOG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_12 (JNIEnv*, jclass, jint, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_12
  (JNIEnv* env, jclass , jint history, jint nmixtures)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorMOG_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorMOG> Ptr_BackgroundSubtractorMOG;
        Ptr_BackgroundSubtractorMOG _retval_ = cv::bgsegm::createBackgroundSubtractorMOG( (int)history, (int)nmixtures );
        return (jlong)(new Ptr_BackgroundSubtractorMOG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_13 (JNIEnv*, jclass, jint);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_13
  (JNIEnv* env, jclass , jint history)
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorMOG_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorMOG> Ptr_BackgroundSubtractorMOG;
        Ptr_BackgroundSubtractorMOG _retval_ = cv::bgsegm::createBackgroundSubtractorMOG( (int)history );
        return (jlong)(new Ptr_BackgroundSubtractorMOG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_14 (JNIEnv*, jclass);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createBackgroundSubtractorMOG_14
  (JNIEnv* env, jclass )
{
    static const char method_name[] = "bgsegm::createBackgroundSubtractorMOG_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::BackgroundSubtractorMOG> Ptr_BackgroundSubtractorMOG;
        Ptr_BackgroundSubtractorMOG _retval_ = cv::bgsegm::createBackgroundSubtractorMOG();
        return (jlong)(new Ptr_BackgroundSubtractorMOG(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  Ptr_SyntheticSequenceGenerator cv::bgsegm::createSyntheticSequenceGenerator(Mat background, Mat object, double amplitude = 2.0, double wavelength = 20.0, double wavespeed = 0.2, double objspeed = 6.0)
//



JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_10
  (JNIEnv* env, jclass , jlong background_nativeObj, jlong object_nativeObj, jdouble amplitude, jdouble wavelength, jdouble wavespeed, jdouble objspeed)
{
    static const char method_name[] = "bgsegm::createSyntheticSequenceGenerator_10()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::SyntheticSequenceGenerator> Ptr_SyntheticSequenceGenerator;
        Mat& background = *((Mat*)background_nativeObj);
        Mat& object = *((Mat*)object_nativeObj);
        Ptr_SyntheticSequenceGenerator _retval_ = cv::bgsegm::createSyntheticSequenceGenerator( background, object, (double)amplitude, (double)wavelength, (double)wavespeed, (double)objspeed );
        return (jlong)(new Ptr_SyntheticSequenceGenerator(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_11 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_11
  (JNIEnv* env, jclass , jlong background_nativeObj, jlong object_nativeObj, jdouble amplitude, jdouble wavelength, jdouble wavespeed)
{
    static const char method_name[] = "bgsegm::createSyntheticSequenceGenerator_11()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::SyntheticSequenceGenerator> Ptr_SyntheticSequenceGenerator;
        Mat& background = *((Mat*)background_nativeObj);
        Mat& object = *((Mat*)object_nativeObj);
        Ptr_SyntheticSequenceGenerator _retval_ = cv::bgsegm::createSyntheticSequenceGenerator( background, object, (double)amplitude, (double)wavelength, (double)wavespeed );
        return (jlong)(new Ptr_SyntheticSequenceGenerator(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_12 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_12
  (JNIEnv* env, jclass , jlong background_nativeObj, jlong object_nativeObj, jdouble amplitude, jdouble wavelength)
{
    static const char method_name[] = "bgsegm::createSyntheticSequenceGenerator_12()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::SyntheticSequenceGenerator> Ptr_SyntheticSequenceGenerator;
        Mat& background = *((Mat*)background_nativeObj);
        Mat& object = *((Mat*)object_nativeObj);
        Ptr_SyntheticSequenceGenerator _retval_ = cv::bgsegm::createSyntheticSequenceGenerator( background, object, (double)amplitude, (double)wavelength );
        return (jlong)(new Ptr_SyntheticSequenceGenerator(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_13 (JNIEnv*, jclass, jlong, jlong, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_13
  (JNIEnv* env, jclass , jlong background_nativeObj, jlong object_nativeObj, jdouble amplitude)
{
    static const char method_name[] = "bgsegm::createSyntheticSequenceGenerator_13()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::SyntheticSequenceGenerator> Ptr_SyntheticSequenceGenerator;
        Mat& background = *((Mat*)background_nativeObj);
        Mat& object = *((Mat*)object_nativeObj);
        Ptr_SyntheticSequenceGenerator _retval_ = cv::bgsegm::createSyntheticSequenceGenerator( background, object, (double)amplitude );
        return (jlong)(new Ptr_SyntheticSequenceGenerator(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}





JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_14 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_Bgsegm_createSyntheticSequenceGenerator_14
  (JNIEnv* env, jclass , jlong background_nativeObj, jlong object_nativeObj)
{
    static const char method_name[] = "bgsegm::createSyntheticSequenceGenerator_14()";
    try {
        LOGD("%s", method_name);
        typedef Ptr<cv::bgsegm::SyntheticSequenceGenerator> Ptr_SyntheticSequenceGenerator;
        Mat& background = *((Mat*)background_nativeObj);
        Mat& object = *((Mat*)object_nativeObj);
        Ptr_SyntheticSequenceGenerator _retval_ = cv::bgsegm::createSyntheticSequenceGenerator( background, object );
        return (jlong)(new Ptr_SyntheticSequenceGenerator(_retval_));
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::bgsegm::BackgroundSubtractorCNT::getIsParallel()
//

using namespace cv::bgsegm;

JNIEXPORT jboolean JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getIsParallel_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getIsParallel_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getIsParallel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        return (*me)->getIsParallel();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  bool cv::bgsegm::BackgroundSubtractorCNT::getUseHistory()
//

using namespace cv::bgsegm;

JNIEXPORT jboolean JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getUseHistory_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jboolean JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getUseHistory_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getUseHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        return (*me)->getUseHistory();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::bgsegm::BackgroundSubtractorCNT::getMaxPixelStability()
//

using namespace cv::bgsegm;

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getMaxPixelStability_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getMaxPixelStability_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getMaxPixelStability_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        return (*me)->getMaxPixelStability();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::bgsegm::BackgroundSubtractorCNT::getMinPixelStability()
//

using namespace cv::bgsegm;

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getMinPixelStability_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getMinPixelStability_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getMinPixelStability_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        return (*me)->getMinPixelStability();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::bgsegm::BackgroundSubtractorCNT::apply(Mat image, Mat& fgmask, double learningRate = -1)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_apply_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_apply_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj, jdouble learningRate)
{
    static const char method_name[] = "bgsegm::apply_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask, (double)learningRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_apply_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_apply_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj)
{
    static const char method_name[] = "bgsegm::apply_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorCNT::getBackgroundImage(Mat& backgroundImage)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getBackgroundImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_getBackgroundImage_10
  (JNIEnv* env, jclass , jlong self, jlong backgroundImage_nativeObj)
{
    static const char method_name[] = "bgsegm::getBackgroundImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        Mat& backgroundImage = *((Mat*)backgroundImage_nativeObj);
        (*me)->getBackgroundImage( backgroundImage );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorCNT::setIsParallel(bool value)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_setIsParallel_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_setIsParallel_10
  (JNIEnv* env, jclass , jlong self, jboolean value)
{
    static const char method_name[] = "bgsegm::setIsParallel_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        (*me)->setIsParallel( (bool)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorCNT::setMaxPixelStability(int value)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_setMaxPixelStability_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_setMaxPixelStability_10
  (JNIEnv* env, jclass , jlong self, jint value)
{
    static const char method_name[] = "bgsegm::setMaxPixelStability_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        (*me)->setMaxPixelStability( (int)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorCNT::setMinPixelStability(int value)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_setMinPixelStability_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_setMinPixelStability_10
  (JNIEnv* env, jclass , jlong self, jint value)
{
    static const char method_name[] = "bgsegm::setMinPixelStability_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        (*me)->setMinPixelStability( (int)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorCNT::setUseHistory(bool value)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_setUseHistory_10 (JNIEnv*, jclass, jlong, jboolean);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_setUseHistory_10
  (JNIEnv* env, jclass , jlong self, jboolean value)
{
    static const char method_name[] = "bgsegm::setUseHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorCNT>* me = (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self; //TODO: check for NULL
        (*me)->setUseHistory( (bool)value );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::bgsegm::BackgroundSubtractorCNT>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorCNT_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::bgsegm::BackgroundSubtractorCNT>*) self;
}


//
//  native support for java finalize()
//  static void cv::bgsegm::BackgroundSubtractorLSBPDesc::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBPDesc_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBPDesc_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (cv::bgsegm::BackgroundSubtractorLSBPDesc*) self;
}


//
//  void cv::bgsegm::BackgroundSubtractorLSBP::apply(Mat image, Mat& fgmask, double learningRate = -1)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBP_apply_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBP_apply_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj, jdouble learningRate)
{
    static const char method_name[] = "bgsegm::apply_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorLSBP>* me = (Ptr<cv::bgsegm::BackgroundSubtractorLSBP>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask, (double)learningRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBP_apply_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBP_apply_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj)
{
    static const char method_name[] = "bgsegm::apply_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorLSBP>* me = (Ptr<cv::bgsegm::BackgroundSubtractorLSBP>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorLSBP::getBackgroundImage(Mat& backgroundImage)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBP_getBackgroundImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBP_getBackgroundImage_10
  (JNIEnv* env, jclass , jlong self, jlong backgroundImage_nativeObj)
{
    static const char method_name[] = "bgsegm::getBackgroundImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorLSBP>* me = (Ptr<cv::bgsegm::BackgroundSubtractorLSBP>*) self; //TODO: check for NULL
        Mat& backgroundImage = *((Mat*)backgroundImage_nativeObj);
        (*me)->getBackgroundImage( backgroundImage );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::bgsegm::BackgroundSubtractorLSBP>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBP_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorLSBP_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::bgsegm::BackgroundSubtractorLSBP>*) self;
}


//
//   cv::bgsegm::SyntheticSequenceGenerator::SyntheticSequenceGenerator(Mat background, Mat object, double amplitude, double wavelength, double wavespeed, double objspeed)
//

using namespace cv::bgsegm;

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_SyntheticSequenceGenerator_SyntheticSequenceGenerator_10 (JNIEnv*, jclass, jlong, jlong, jdouble, jdouble, jdouble, jdouble);

JNIEXPORT jlong JNICALL Java_org_opencv_bgsegm_SyntheticSequenceGenerator_SyntheticSequenceGenerator_10
  (JNIEnv* env, jclass , jlong background_nativeObj, jlong object_nativeObj, jdouble amplitude, jdouble wavelength, jdouble wavespeed, jdouble objspeed)
{
    static const char method_name[] = "bgsegm::SyntheticSequenceGenerator_10()";
    try {
        LOGD("%s", method_name);
        Mat& background = *((Mat*)background_nativeObj);
        Mat& object = *((Mat*)object_nativeObj);
        cv::bgsegm::SyntheticSequenceGenerator* _retval_ = new cv::bgsegm::SyntheticSequenceGenerator( background, object, (double)amplitude, (double)wavelength, (double)wavespeed, (double)objspeed );
        return (jlong) _retval_;
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::bgsegm::SyntheticSequenceGenerator::getNextFrame(Mat& frame, Mat& gtMask)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_SyntheticSequenceGenerator_getNextFrame_10 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_SyntheticSequenceGenerator_getNextFrame_10
  (JNIEnv* env, jclass , jlong self, jlong frame_nativeObj, jlong gtMask_nativeObj)
{
    static const char method_name[] = "bgsegm::getNextFrame_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::SyntheticSequenceGenerator>* me = (Ptr<cv::bgsegm::SyntheticSequenceGenerator>*) self; //TODO: check for NULL
        Mat& frame = *((Mat*)frame_nativeObj);
        Mat& gtMask = *((Mat*)gtMask_nativeObj);
        (*me)->getNextFrame( frame, gtMask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::bgsegm::SyntheticSequenceGenerator>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bgsegm_SyntheticSequenceGenerator_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_SyntheticSequenceGenerator_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::bgsegm::SyntheticSequenceGenerator>*) self;
}


//
//  void cv::bgsegm::BackgroundSubtractorGSOC::apply(Mat image, Mat& fgmask, double learningRate = -1)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGSOC_apply_10 (JNIEnv*, jclass, jlong, jlong, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGSOC_apply_10
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj, jdouble learningRate)
{
    static const char method_name[] = "bgsegm::apply_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGSOC>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGSOC>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask, (double)learningRate );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGSOC_apply_11 (JNIEnv*, jclass, jlong, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGSOC_apply_11
  (JNIEnv* env, jclass , jlong self, jlong image_nativeObj, jlong fgmask_nativeObj)
{
    static const char method_name[] = "bgsegm::apply_11()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGSOC>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGSOC>*) self; //TODO: check for NULL
        Mat& image = *((Mat*)image_nativeObj);
        Mat& fgmask = *((Mat*)fgmask_nativeObj);
        (*me)->apply( image, fgmask );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorGSOC::getBackgroundImage(Mat& backgroundImage)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGSOC_getBackgroundImage_10 (JNIEnv*, jclass, jlong, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGSOC_getBackgroundImage_10
  (JNIEnv* env, jclass , jlong self, jlong backgroundImage_nativeObj)
{
    static const char method_name[] = "bgsegm::getBackgroundImage_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorGSOC>* me = (Ptr<cv::bgsegm::BackgroundSubtractorGSOC>*) self; //TODO: check for NULL
        Mat& backgroundImage = *((Mat*)backgroundImage_nativeObj);
        (*me)->getBackgroundImage( backgroundImage );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::bgsegm::BackgroundSubtractorGSOC>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGSOC_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorGSOC_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::bgsegm::BackgroundSubtractorGSOC>*) self;
}


//
//  double cv::bgsegm::BackgroundSubtractorMOG::getBackgroundRatio()
//

using namespace cv::bgsegm;

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_getBackgroundRatio_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_getBackgroundRatio_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getBackgroundRatio_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorMOG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorMOG>*) self; //TODO: check for NULL
        return (*me)->getBackgroundRatio();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  double cv::bgsegm::BackgroundSubtractorMOG::getNoiseSigma()
//

using namespace cv::bgsegm;

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_getNoiseSigma_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jdouble JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_getNoiseSigma_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getNoiseSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorMOG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorMOG>*) self; //TODO: check for NULL
        return (*me)->getNoiseSigma();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::bgsegm::BackgroundSubtractorMOG::getHistory()
//

using namespace cv::bgsegm;

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_getHistory_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_getHistory_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorMOG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorMOG>*) self; //TODO: check for NULL
        return (*me)->getHistory();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  int cv::bgsegm::BackgroundSubtractorMOG::getNMixtures()
//

using namespace cv::bgsegm;

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_getNMixtures_10 (JNIEnv*, jclass, jlong);

JNIEXPORT jint JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_getNMixtures_10
  (JNIEnv* env, jclass , jlong self)
{
    static const char method_name[] = "bgsegm::getNMixtures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorMOG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorMOG>*) self; //TODO: check for NULL
        return (*me)->getNMixtures();
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
    return 0;
}



//
//  void cv::bgsegm::BackgroundSubtractorMOG::setBackgroundRatio(double backgroundRatio)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_setBackgroundRatio_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_setBackgroundRatio_10
  (JNIEnv* env, jclass , jlong self, jdouble backgroundRatio)
{
    static const char method_name[] = "bgsegm::setBackgroundRatio_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorMOG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorMOG>*) self; //TODO: check for NULL
        (*me)->setBackgroundRatio( (double)backgroundRatio );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorMOG::setHistory(int nframes)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_setHistory_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_setHistory_10
  (JNIEnv* env, jclass , jlong self, jint nframes)
{
    static const char method_name[] = "bgsegm::setHistory_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorMOG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorMOG>*) self; //TODO: check for NULL
        (*me)->setHistory( (int)nframes );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorMOG::setNMixtures(int nmix)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_setNMixtures_10 (JNIEnv*, jclass, jlong, jint);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_setNMixtures_10
  (JNIEnv* env, jclass , jlong self, jint nmix)
{
    static const char method_name[] = "bgsegm::setNMixtures_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorMOG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorMOG>*) self; //TODO: check for NULL
        (*me)->setNMixtures( (int)nmix );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  void cv::bgsegm::BackgroundSubtractorMOG::setNoiseSigma(double noiseSigma)
//

using namespace cv::bgsegm;

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_setNoiseSigma_10 (JNIEnv*, jclass, jlong, jdouble);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_setNoiseSigma_10
  (JNIEnv* env, jclass , jlong self, jdouble noiseSigma)
{
    static const char method_name[] = "bgsegm::setNoiseSigma_10()";
    try {
        LOGD("%s", method_name);
        Ptr<cv::bgsegm::BackgroundSubtractorMOG>* me = (Ptr<cv::bgsegm::BackgroundSubtractorMOG>*) self; //TODO: check for NULL
        (*me)->setNoiseSigma( (double)noiseSigma );
    } catch(const std::exception &e) {
        throwJavaException(env, &e, method_name);
    } catch (...) {
        throwJavaException(env, 0, method_name);
    }
}



//
//  native support for java finalize()
//  static void Ptr<cv::bgsegm::BackgroundSubtractorMOG>::delete( __int64 self )
//
JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_delete(JNIEnv*, jclass, jlong);

JNIEXPORT void JNICALL Java_org_opencv_bgsegm_BackgroundSubtractorMOG_delete
  (JNIEnv*, jclass, jlong self)
{
    delete (Ptr<cv::bgsegm::BackgroundSubtractorMOG>*) self;
}



} // extern "C"

#endif // HAVE_OPENCV_BGSEGM
