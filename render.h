
#include <errno.h>
#include <math.h>

#include <EGL/egl.h>
#include <GLES/gl.h>

#include <android_native_app_glue.h>

static void __gluMakeIdentityf(GLfloat m[16]);

#define __glPi 3.14159265358979323846

void gluPerspectivef(GLfloat fovy, GLfloat aspect, GLfloat zNear, GLfloat zFar);

static int engine_init_display(struct engine* engine);

 static void engine_draw_frame(struct engine* engine);

static void engine_term_display(struct engine* engine);