#include "com_storm_ffmpeg_command_ffmpeg_FFmpegRun.h"
#include "ffmpeg.h"
#include <string.h>
/*
 * Class:     Java_com_storm_ffmpeg_command_ffmpeg_FFmpegRun
 * Method:    run
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_storm_ffmpeg_command_ffmpeg_FFmpegRun_run(JNIEnv *env,
        jclass obj, jobjectArray commands) {

    int argc = (*env)->GetArrayLength(env, commands);
    char *argv[argc];

    int i;
    for (i = 0; i < argc; i++) {
        jstring js = (jstring) (*env)->GetObjectArrayElement(env, commands, i);
        argv[i] = (char*) (*env)->GetStringUTFChars(env, js, 0);
    }
    return run(argc, argv);
}