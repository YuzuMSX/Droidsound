/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ssb_droidsound_utils_NativeArcFile */

#ifndef _Included_com_ssb_droidsound_utils_NativeArcFile
#define _Included_com_ssb_droidsound_utils_NativeArcFile
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    setPosition
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_setPosition
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    getPositionByIndex
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_getPositionByIndex
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    rewind
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_rewind
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    openFile
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_openFile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    closeFile
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_closeFile
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    getTotalCount
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_getTotalCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    getentryName
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_getentryName
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    getcurrentSize
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_getcurrentSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    getcurrentName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_getcurrentName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    findEntry
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_findEntry
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_ssb_droidsound_utils_NativeArcFile
 * Method:    readfd
 * Signature: (J[BI)I
 */
JNIEXPORT jint JNICALL Java_com_ssb_droidsound_utils_NativeArcFile_readfd
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif
