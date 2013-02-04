/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_ysu_itrace_TobiiTracker */

#ifndef _Included_edu_ysu_itrace_TobiiTracker
#define _Included_edu_ysu_itrace_TobiiTracker
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     edu_ysu_itrace_TobiiTracker
 * Method:    jniConnectTobiiTracker
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_edu_ysu_itrace_TobiiTracker_jniConnectTobiiTracker
  (JNIEnv *, jobject, jint);

/*
 * Class:     edu_ysu_itrace_TobiiTracker
 * Method:    close
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_edu_ysu_itrace_TobiiTracker_close
  (JNIEnv *, jobject);

/*
 * Class:     edu_ysu_itrace_TobiiTracker
 * Method:    startTracking
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_edu_ysu_itrace_TobiiTracker_startTracking
  (JNIEnv *, jobject);

/*
 * Class:     edu_ysu_itrace_TobiiTracker
 * Method:    stopTracking
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_edu_ysu_itrace_TobiiTracker_stopTracking
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
