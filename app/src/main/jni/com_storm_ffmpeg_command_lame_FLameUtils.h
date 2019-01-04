/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>

#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include <android/log.h>
#include "libmp3lame/lame.h"


/* Header for class com_storm_ffmpeg_command_lame_FLameUtils */

#ifndef _Included_com_storm_ffmpeg_command_lame_FLameUtils
#define _Included_com_storm_ffmpeg_command_lame_FLameUtils
#ifdef __cplusplus
extern "C" {
#endif


#define LOG_TAG "mp3lame"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)


/*
 * Class:     com_storm_ffmpeg_command_lame_FLameUtils
 * Method:    init
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_init
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_storm_ffmpeg_command_lame_FLameUtils
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_close
  (JNIEnv *, jclass);

/*
 * Class:     com_storm_ffmpeg_command_lame_FLameUtils
 * Method:    encode
 * Signature: ([S[SI[B)I
 */
JNIEXPORT jint JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_encode
  (JNIEnv *, jclass, jshortArray, jshortArray, jint, jbyteArray);

/*
 * Class:     com_storm_ffmpeg_command_lame_FLameUtils
 * Method:    flush
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_flush
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_storm_ffmpeg_command_lame_FLameUtils
 * Method:    getLameVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_getLameVersion
  (JNIEnv *, jclass);

/*
 * Class:     com_storm_ffmpeg_command_lame_FLameUtils
 * Method:    encodeFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_encodeFile
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_storm_ffmpeg_command_lame_FLameUtils
 * Method:    setRawBigEndian
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_setRawBigEndian
  (JNIEnv *, jclass, jboolean);


/*
 * Class:     com_storm_ffmpeg_command_lame_FLameUtils
 * Method:    encodeFile
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_wavTomp3
  (JNIEnv *, jclass, jstring, jstring,jint,jint,jint);


JNIEXPORT void JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_wav2mp3
  (JNIEnv *, jclass, jstring, jstring);

JNIEXPORT void JNICALL Java_com_storm_ffmpeg_command_lame_FLameUtils_wavmp3
  (JNIEnv *, jclass, jstring, jstring, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
