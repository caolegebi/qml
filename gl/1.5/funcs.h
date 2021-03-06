
// ** file automatically generated by glgen -- do not edit manually **

#ifndef __cplusplus
#include <inttypes.h>
#include <stddef.h>
typedef unsigned int	GLenum;
typedef unsigned char	GLboolean;
typedef unsigned int	GLbitfield;
typedef void		GLvoid;
typedef char            GLchar;
typedef signed char	GLbyte;		/* 1-byte signed */
typedef short		GLshort;	/* 2-byte signed */
typedef int		GLint;		/* 4-byte signed */
typedef unsigned char	GLubyte;	/* 1-byte unsigned */
typedef unsigned short	GLushort;	/* 2-byte unsigned */
typedef unsigned int	GLuint;		/* 4-byte unsigned */
typedef int		GLsizei;	/* 4-byte signed */
typedef float		GLfloat;	/* single precision float */
typedef float		GLclampf;	/* single precision float in [0,1] */
typedef double		GLdouble;	/* double precision float */
typedef double		GLclampd;	/* double precision float in [0,1] */
typedef int64_t         GLint64;
typedef uint64_t        GLuint64;
typedef ptrdiff_t       GLintptr;
typedef ptrdiff_t       GLsizeiptr;
typedef ptrdiff_t       GLintptrARB;
typedef ptrdiff_t       GLsizeiptrARB;
typedef struct __GLsync *GLsync;
#endif

#ifdef __cplusplus
extern "C" {
#endif

void *gl1_5_funcs();

void gl1_5_glViewport(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_5_glDepthRange(void *_glfuncs, GLdouble nearVal, GLdouble farVal);
GLboolean gl1_5_glIsEnabled(void *_glfuncs, GLenum cap);
void gl1_5_glGetTexLevelParameteriv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLint* params);
void gl1_5_glGetTexLevelParameterfv(void *_glfuncs, GLenum target, GLint level, GLenum pname, GLfloat* params);
void gl1_5_glGetTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_5_glGetTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_5_glGetTexImage(void *_glfuncs, GLenum target, GLint level, GLenum format, GLenum gltype, GLvoid* pixels);
void gl1_5_glGetIntegerv(void *_glfuncs, GLenum pname, GLint* params);
void gl1_5_glGetFloatv(void *_glfuncs, GLenum pname, GLfloat* params);
GLenum gl1_5_glGetError(void *_glfuncs);
void gl1_5_glGetDoublev(void *_glfuncs, GLenum pname, GLdouble* params);
void gl1_5_glGetBooleanv(void *_glfuncs, GLenum pname, GLboolean* params);
void gl1_5_glReadPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum gltype, GLvoid* pixels);
void gl1_5_glReadBuffer(void *_glfuncs, GLenum mode);
void gl1_5_glPixelStorei(void *_glfuncs, GLenum pname, GLint param);
void gl1_5_glPixelStoref(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_5_glDepthFunc(void *_glfuncs, GLenum glfunc);
void gl1_5_glStencilOp(void *_glfuncs, GLenum fail, GLenum zfail, GLenum zpass);
void gl1_5_glStencilFunc(void *_glfuncs, GLenum glfunc, GLint ref, GLuint mask);
void gl1_5_glLogicOp(void *_glfuncs, GLenum opcode);
void gl1_5_glBlendFunc(void *_glfuncs, GLenum sfactor, GLenum dfactor);
void gl1_5_glFlush(void *_glfuncs);
void gl1_5_glFinish(void *_glfuncs);
void gl1_5_glEnable(void *_glfuncs, GLenum cap);
void gl1_5_glDisable(void *_glfuncs, GLenum cap);
void gl1_5_glDepthMask(void *_glfuncs, GLboolean flag);
void gl1_5_glColorMask(void *_glfuncs, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void gl1_5_glStencilMask(void *_glfuncs, GLuint mask);
void gl1_5_glClearDepth(void *_glfuncs, GLdouble depth);
void gl1_5_glClearStencil(void *_glfuncs, GLint s);
void gl1_5_glClearColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_5_glClear(void *_glfuncs, GLbitfield mask);
void gl1_5_glDrawBuffer(void *_glfuncs, GLenum mode);
void gl1_5_glTexImage2D(void *_glfuncs, GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_5_glTexImage1D(void *_glfuncs, GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_5_glTexParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_5_glTexParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl1_5_glTexParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_5_glTexParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl1_5_glScissor(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_5_glPolygonMode(void *_glfuncs, GLenum face, GLenum mode);
void gl1_5_glPointSize(void *_glfuncs, GLfloat size);
void gl1_5_glLineWidth(void *_glfuncs, GLfloat width);
void gl1_5_glHint(void *_glfuncs, GLenum target, GLenum mode);
void gl1_5_glFrontFace(void *_glfuncs, GLenum mode);
void gl1_5_glCullFace(void *_glfuncs, GLenum mode);
void gl1_5_glIndexubv(void *_glfuncs, const GLubyte* c);
void gl1_5_glIndexub(void *_glfuncs, GLubyte c);
GLboolean gl1_5_glIsTexture(void *_glfuncs, GLuint texture);
void gl1_5_glGenTextures(void *_glfuncs, GLsizei n, GLuint* textures);
void gl1_5_glDeleteTextures(void *_glfuncs, GLsizei n, const GLuint* textures);
void gl1_5_glBindTexture(void *_glfuncs, GLenum target, GLuint texture);
void gl1_5_glTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_5_glTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_5_glCopyTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_5_glCopyTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void gl1_5_glCopyTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void gl1_5_glCopyTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
void gl1_5_glPolygonOffset(void *_glfuncs, GLfloat factor, GLfloat units);
void gl1_5_glDrawElements(void *_glfuncs, GLenum mode, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl1_5_glDrawArrays(void *_glfuncs, GLenum mode, GLint first, GLsizei count);
void gl1_5_glCopyTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_5_glTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_5_glTexImage3D(void *_glfuncs, GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_5_glDrawRangeElements(void *_glfuncs, GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum gltype, const GLvoid* indices);
void gl1_5_glBlendEquation(void *_glfuncs, GLenum mode);
void gl1_5_glBlendColor(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_5_glGetCompressedTexImage(void *_glfuncs, GLenum target, GLint level, GLvoid* img);
void gl1_5_glCompressedTexSubImage1D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl1_5_glCompressedTexSubImage2D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl1_5_glCompressedTexSubImage3D(void *_glfuncs, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
void gl1_5_glCompressedTexImage1D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data);
void gl1_5_glCompressedTexImage2D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
void gl1_5_glCompressedTexImage3D(void *_glfuncs, GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
void gl1_5_glSampleCoverage(void *_glfuncs, GLfloat value, GLboolean invert);
void gl1_5_glActiveTexture(void *_glfuncs, GLenum texture);
void gl1_5_glPointParameteriv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_5_glPointParameteri(void *_glfuncs, GLenum pname, GLint param);
void gl1_5_glPointParameterfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_5_glPointParameterf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_5_glMultiDrawArrays(void *_glfuncs, GLenum mode, const GLint* first, const GLsizei* count, GLsizei drawcount);
void gl1_5_glBlendFuncSeparate(void *_glfuncs, GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
void gl1_5_glGetBufferParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
GLboolean gl1_5_glUnmapBuffer(void *_glfuncs, GLenum target);
void gl1_5_glGetBufferSubData(void *_glfuncs, GLenum target, GLintptr offset, GLsizeiptr size, GLvoid* data);
void gl1_5_glBufferSubData(void *_glfuncs, GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
void gl1_5_glBufferData(void *_glfuncs, GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
GLboolean gl1_5_glIsBuffer(void *_glfuncs, GLuint buffer);
void gl1_5_glGenBuffers(void *_glfuncs, GLsizei n, GLuint* buffers);
void gl1_5_glDeleteBuffers(void *_glfuncs, GLsizei n, const GLuint* buffers);
void gl1_5_glBindBuffer(void *_glfuncs, GLenum target, GLuint buffer);
void gl1_5_glGetQueryObjectuiv(void *_glfuncs, GLuint id, GLenum pname, GLuint* params);
void gl1_5_glGetQueryObjectiv(void *_glfuncs, GLuint id, GLenum pname, GLint* params);
void gl1_5_glGetQueryiv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_5_glEndQuery(void *_glfuncs, GLenum target);
void gl1_5_glBeginQuery(void *_glfuncs, GLenum target, GLuint id);
GLboolean gl1_5_glIsQuery(void *_glfuncs, GLuint id);
void gl1_5_glDeleteQueries(void *_glfuncs, GLsizei n, const GLuint* ids);
void gl1_5_glGenQueries(void *_glfuncs, GLsizei n, GLuint* ids);
void gl1_5_glTranslatef(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_5_glTranslated(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_5_glScalef(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_5_glScaled(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_5_glRotatef(void *_glfuncs, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void gl1_5_glRotated(void *_glfuncs, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
void gl1_5_glPushMatrix(void *_glfuncs);
void gl1_5_glPopMatrix(void *_glfuncs);
void gl1_5_glOrtho(void *_glfuncs, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
void gl1_5_glMultMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_5_glMultMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_5_glMatrixMode(void *_glfuncs, GLenum mode);
void gl1_5_glLoadMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_5_glLoadMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_5_glLoadIdentity(void *_glfuncs);
void gl1_5_glFrustum(void *_glfuncs, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLboolean gl1_5_glIsList(void *_glfuncs, GLuint list);
void gl1_5_glGetTexGeniv(void *_glfuncs, GLenum coord, GLenum pname, GLint* params);
void gl1_5_glGetTexGenfv(void *_glfuncs, GLenum coord, GLenum pname, GLfloat* params);
void gl1_5_glGetTexGendv(void *_glfuncs, GLenum coord, GLenum pname, GLdouble* params);
void gl1_5_glGetTexEnviv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_5_glGetTexEnvfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_5_glGetPolygonStipple(void *_glfuncs, GLubyte* mask);
void gl1_5_glGetPixelMapusv(void *_glfuncs, GLenum glmap, GLushort* values);
void gl1_5_glGetPixelMapuiv(void *_glfuncs, GLenum glmap, GLuint* values);
void gl1_5_glGetPixelMapfv(void *_glfuncs, GLenum glmap, GLfloat* values);
void gl1_5_glGetMaterialiv(void *_glfuncs, GLenum face, GLenum pname, GLint* params);
void gl1_5_glGetMaterialfv(void *_glfuncs, GLenum face, GLenum pname, GLfloat* params);
void gl1_5_glGetMapiv(void *_glfuncs, GLenum target, GLenum query, GLint* v);
void gl1_5_glGetMapfv(void *_glfuncs, GLenum target, GLenum query, GLfloat* v);
void gl1_5_glGetMapdv(void *_glfuncs, GLenum target, GLenum query, GLdouble* v);
void gl1_5_glGetLightiv(void *_glfuncs, GLenum light, GLenum pname, GLint* params);
void gl1_5_glGetLightfv(void *_glfuncs, GLenum light, GLenum pname, GLfloat* params);
void gl1_5_glGetClipPlane(void *_glfuncs, GLenum plane, GLdouble* equation);
void gl1_5_glDrawPixels(void *_glfuncs, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* pixels);
void gl1_5_glCopyPixels(void *_glfuncs, GLint x, GLint y, GLsizei width, GLsizei height, GLenum gltype);
void gl1_5_glPixelMapusv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLushort* values);
void gl1_5_glPixelMapuiv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLuint* values);
void gl1_5_glPixelMapfv(void *_glfuncs, GLenum glmap, GLint mapsize, const GLfloat* values);
void gl1_5_glPixelTransferi(void *_glfuncs, GLenum pname, GLint param);
void gl1_5_glPixelTransferf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_5_glPixelZoom(void *_glfuncs, GLfloat xfactor, GLfloat yfactor);
void gl1_5_glAlphaFunc(void *_glfuncs, GLenum glfunc, GLfloat ref);
void gl1_5_glEvalPoint2(void *_glfuncs, GLint i, GLint j);
void gl1_5_glEvalMesh2(void *_glfuncs, GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
void gl1_5_glEvalPoint1(void *_glfuncs, GLint i);
void gl1_5_glEvalMesh1(void *_glfuncs, GLenum mode, GLint i1, GLint i2);
void gl1_5_glEvalCoord2fv(void *_glfuncs, const GLfloat* u);
void gl1_5_glEvalCoord2f(void *_glfuncs, GLfloat u, GLfloat v);
void gl1_5_glEvalCoord2dv(void *_glfuncs, const GLdouble* u);
void gl1_5_glEvalCoord2d(void *_glfuncs, GLdouble u, GLdouble v);
void gl1_5_glEvalCoord1fv(void *_glfuncs, const GLfloat* u);
void gl1_5_glEvalCoord1f(void *_glfuncs, GLfloat u);
void gl1_5_glEvalCoord1dv(void *_glfuncs, const GLdouble* u);
void gl1_5_glEvalCoord1d(void *_glfuncs, GLdouble u);
void gl1_5_glMapGrid2f(void *_glfuncs, GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
void gl1_5_glMapGrid2d(void *_glfuncs, GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
void gl1_5_glMapGrid1f(void *_glfuncs, GLint un, GLfloat u1, GLfloat u2);
void gl1_5_glMapGrid1d(void *_glfuncs, GLint un, GLdouble u1, GLdouble u2);
void gl1_5_glMap2f(void *_glfuncs, GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);
void gl1_5_glMap2d(void *_glfuncs, GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
void gl1_5_glMap1f(void *_glfuncs, GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
void gl1_5_glMap1d(void *_glfuncs, GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
void gl1_5_glPushAttrib(void *_glfuncs, GLbitfield mask);
void gl1_5_glPopAttrib(void *_glfuncs);
void gl1_5_glAccum(void *_glfuncs, GLenum op, GLfloat value);
void gl1_5_glIndexMask(void *_glfuncs, GLuint mask);
void gl1_5_glClearIndex(void *_glfuncs, GLfloat c);
void gl1_5_glClearAccum(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_5_glPushName(void *_glfuncs, GLuint name);
void gl1_5_glPopName(void *_glfuncs);
void gl1_5_glPassThrough(void *_glfuncs, GLfloat token);
void gl1_5_glLoadName(void *_glfuncs, GLuint name);
void gl1_5_glInitNames(void *_glfuncs);
GLint gl1_5_glRenderMode(void *_glfuncs, GLenum mode);
void gl1_5_glSelectBuffer(void *_glfuncs, GLsizei size, GLuint* buffer);
void gl1_5_glFeedbackBuffer(void *_glfuncs, GLsizei size, GLenum gltype, GLfloat* buffer);
void gl1_5_glTexGeniv(void *_glfuncs, GLenum coord, GLenum pname, const GLint* params);
void gl1_5_glTexGeni(void *_glfuncs, GLenum coord, GLenum pname, GLint param);
void gl1_5_glTexGenfv(void *_glfuncs, GLenum coord, GLenum pname, const GLfloat* params);
void gl1_5_glTexGenf(void *_glfuncs, GLenum coord, GLenum pname, GLfloat param);
void gl1_5_glTexGendv(void *_glfuncs, GLenum coord, GLenum pname, const GLdouble* params);
void gl1_5_glTexGend(void *_glfuncs, GLenum coord, GLenum pname, GLdouble param);
void gl1_5_glTexEnviv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_5_glTexEnvi(void *_glfuncs, GLenum target, GLenum pname, GLint param);
void gl1_5_glTexEnvfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_5_glTexEnvf(void *_glfuncs, GLenum target, GLenum pname, GLfloat param);
void gl1_5_glShadeModel(void *_glfuncs, GLenum mode);
void gl1_5_glPolygonStipple(void *_glfuncs, const GLubyte* mask);
void gl1_5_glMaterialiv(void *_glfuncs, GLenum face, GLenum pname, const GLint* params);
void gl1_5_glMateriali(void *_glfuncs, GLenum face, GLenum pname, GLint param);
void gl1_5_glMaterialfv(void *_glfuncs, GLenum face, GLenum pname, const GLfloat* params);
void gl1_5_glMaterialf(void *_glfuncs, GLenum face, GLenum pname, GLfloat param);
void gl1_5_glLineStipple(void *_glfuncs, GLint factor, GLushort pattern);
void gl1_5_glLightModeliv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_5_glLightModeli(void *_glfuncs, GLenum pname, GLint param);
void gl1_5_glLightModelfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_5_glLightModelf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_5_glLightiv(void *_glfuncs, GLenum light, GLenum pname, const GLint* params);
void gl1_5_glLighti(void *_glfuncs, GLenum light, GLenum pname, GLint param);
void gl1_5_glLightfv(void *_glfuncs, GLenum light, GLenum pname, const GLfloat* params);
void gl1_5_glLightf(void *_glfuncs, GLenum light, GLenum pname, GLfloat param);
void gl1_5_glFogiv(void *_glfuncs, GLenum pname, const GLint* params);
void gl1_5_glFogi(void *_glfuncs, GLenum pname, GLint param);
void gl1_5_glFogfv(void *_glfuncs, GLenum pname, const GLfloat* params);
void gl1_5_glFogf(void *_glfuncs, GLenum pname, GLfloat param);
void gl1_5_glColorMaterial(void *_glfuncs, GLenum face, GLenum mode);
void gl1_5_glClipPlane(void *_glfuncs, GLenum plane, const GLdouble* equation);
void gl1_5_glVertex4sv(void *_glfuncs, const GLshort* v);
void gl1_5_glVertex4s(void *_glfuncs, GLshort x, GLshort y, GLshort z, GLshort w);
void gl1_5_glVertex4iv(void *_glfuncs, const GLint* v);
void gl1_5_glVertex4i(void *_glfuncs, GLint x, GLint y, GLint z, GLint w);
void gl1_5_glVertex4fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glVertex4f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gl1_5_glVertex4dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glVertex4d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void gl1_5_glVertex3sv(void *_glfuncs, const GLshort* v);
void gl1_5_glVertex3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_5_glVertex3iv(void *_glfuncs, const GLint* v);
void gl1_5_glVertex3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_5_glVertex3fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glVertex3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_5_glVertex3dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glVertex3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_5_glVertex2sv(void *_glfuncs, const GLshort* v);
void gl1_5_glVertex2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_5_glVertex2iv(void *_glfuncs, const GLint* v);
void gl1_5_glVertex2i(void *_glfuncs, GLint x, GLint y);
void gl1_5_glVertex2fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glVertex2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_5_glVertex2dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glVertex2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_5_glTexCoord4sv(void *_glfuncs, const GLshort* v);
void gl1_5_glTexCoord4s(void *_glfuncs, GLshort s, GLshort t, GLshort r, GLshort q);
void gl1_5_glTexCoord4iv(void *_glfuncs, const GLint* v);
void gl1_5_glTexCoord4i(void *_glfuncs, GLint s, GLint t, GLint r, GLint q);
void gl1_5_glTexCoord4fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glTexCoord4f(void *_glfuncs, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void gl1_5_glTexCoord4dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glTexCoord4d(void *_glfuncs, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void gl1_5_glTexCoord3sv(void *_glfuncs, const GLshort* v);
void gl1_5_glTexCoord3s(void *_glfuncs, GLshort s, GLshort t, GLshort r);
void gl1_5_glTexCoord3iv(void *_glfuncs, const GLint* v);
void gl1_5_glTexCoord3i(void *_glfuncs, GLint s, GLint t, GLint r);
void gl1_5_glTexCoord3fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glTexCoord3f(void *_glfuncs, GLfloat s, GLfloat t, GLfloat r);
void gl1_5_glTexCoord3dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glTexCoord3d(void *_glfuncs, GLdouble s, GLdouble t, GLdouble r);
void gl1_5_glTexCoord2sv(void *_glfuncs, const GLshort* v);
void gl1_5_glTexCoord2s(void *_glfuncs, GLshort s, GLshort t);
void gl1_5_glTexCoord2iv(void *_glfuncs, const GLint* v);
void gl1_5_glTexCoord2i(void *_glfuncs, GLint s, GLint t);
void gl1_5_glTexCoord2fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glTexCoord2f(void *_glfuncs, GLfloat s, GLfloat t);
void gl1_5_glTexCoord2dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glTexCoord2d(void *_glfuncs, GLdouble s, GLdouble t);
void gl1_5_glTexCoord1sv(void *_glfuncs, const GLshort* v);
void gl1_5_glTexCoord1s(void *_glfuncs, GLshort s);
void gl1_5_glTexCoord1iv(void *_glfuncs, const GLint* v);
void gl1_5_glTexCoord1i(void *_glfuncs, GLint s);
void gl1_5_glTexCoord1fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glTexCoord1f(void *_glfuncs, GLfloat s);
void gl1_5_glTexCoord1dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glTexCoord1d(void *_glfuncs, GLdouble s);
void gl1_5_glRectsv(void *_glfuncs, const GLshort* v1, const GLshort* v2);
void gl1_5_glRects(void *_glfuncs, GLshort x1, GLshort y1, GLshort x2, GLshort y2);
void gl1_5_glRectiv(void *_glfuncs, const GLint* v1, const GLint* v2);
void gl1_5_glRecti(void *_glfuncs, GLint x1, GLint y1, GLint x2, GLint y2);
void gl1_5_glRectfv(void *_glfuncs, const GLfloat* v1, const GLfloat* v2);
void gl1_5_glRectf(void *_glfuncs, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
void gl1_5_glRectdv(void *_glfuncs, const GLdouble* v1, const GLdouble* v2);
void gl1_5_glRectd(void *_glfuncs, GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
void gl1_5_glRasterPos4sv(void *_glfuncs, const GLshort* v);
void gl1_5_glRasterPos4s(void *_glfuncs, GLshort x, GLshort y, GLshort z, GLshort w);
void gl1_5_glRasterPos4iv(void *_glfuncs, const GLint* v);
void gl1_5_glRasterPos4i(void *_glfuncs, GLint x, GLint y, GLint z, GLint w);
void gl1_5_glRasterPos4fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glRasterPos4f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void gl1_5_glRasterPos4dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glRasterPos4d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void gl1_5_glRasterPos3sv(void *_glfuncs, const GLshort* v);
void gl1_5_glRasterPos3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_5_glRasterPos3iv(void *_glfuncs, const GLint* v);
void gl1_5_glRasterPos3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_5_glRasterPos3fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glRasterPos3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_5_glRasterPos3dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glRasterPos3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_5_glRasterPos2sv(void *_glfuncs, const GLshort* v);
void gl1_5_glRasterPos2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_5_glRasterPos2iv(void *_glfuncs, const GLint* v);
void gl1_5_glRasterPos2i(void *_glfuncs, GLint x, GLint y);
void gl1_5_glRasterPos2fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glRasterPos2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_5_glRasterPos2dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glRasterPos2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_5_glNormal3sv(void *_glfuncs, const GLshort* v);
void gl1_5_glNormal3s(void *_glfuncs, GLshort nx, GLshort ny, GLshort nz);
void gl1_5_glNormal3iv(void *_glfuncs, const GLint* v);
void gl1_5_glNormal3i(void *_glfuncs, GLint nx, GLint ny, GLint nz);
void gl1_5_glNormal3fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glNormal3f(void *_glfuncs, GLfloat nx, GLfloat ny, GLfloat nz);
void gl1_5_glNormal3dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glNormal3d(void *_glfuncs, GLdouble nx, GLdouble ny, GLdouble nz);
void gl1_5_glNormal3bv(void *_glfuncs, const GLbyte* v);
void gl1_5_glNormal3b(void *_glfuncs, GLbyte nx, GLbyte ny, GLbyte nz);
void gl1_5_glIndexsv(void *_glfuncs, const GLshort* c);
void gl1_5_glIndexs(void *_glfuncs, GLshort c);
void gl1_5_glIndexiv(void *_glfuncs, const GLint* c);
void gl1_5_glIndexi(void *_glfuncs, GLint c);
void gl1_5_glIndexfv(void *_glfuncs, const GLfloat* c);
void gl1_5_glIndexf(void *_glfuncs, GLfloat c);
void gl1_5_glIndexdv(void *_glfuncs, const GLdouble* c);
void gl1_5_glIndexd(void *_glfuncs, GLdouble c);
void gl1_5_glEnd(void *_glfuncs);
void gl1_5_glEdgeFlagv(void *_glfuncs, const GLboolean* flag);
void gl1_5_glEdgeFlag(void *_glfuncs, GLboolean flag);
void gl1_5_glColor4usv(void *_glfuncs, const GLushort* v);
void gl1_5_glColor4us(void *_glfuncs, GLushort red, GLushort green, GLushort blue, GLushort alpha);
void gl1_5_glColor4uiv(void *_glfuncs, const GLuint* v);
void gl1_5_glColor4ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue, GLuint alpha);
void gl1_5_glColor4ubv(void *_glfuncs, const GLubyte* v);
void gl1_5_glColor4ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void gl1_5_glColor4sv(void *_glfuncs, const GLshort* v);
void gl1_5_glColor4s(void *_glfuncs, GLshort red, GLshort green, GLshort blue, GLshort alpha);
void gl1_5_glColor4iv(void *_glfuncs, const GLint* v);
void gl1_5_glColor4i(void *_glfuncs, GLint red, GLint green, GLint blue, GLint alpha);
void gl1_5_glColor4fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glColor4f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void gl1_5_glColor4dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glColor4d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
void gl1_5_glColor4bv(void *_glfuncs, const GLbyte* v);
void gl1_5_glColor4b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
void gl1_5_glColor3usv(void *_glfuncs, const GLushort* v);
void gl1_5_glColor3us(void *_glfuncs, GLushort red, GLushort green, GLushort blue);
void gl1_5_glColor3uiv(void *_glfuncs, const GLuint* v);
void gl1_5_glColor3ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue);
void gl1_5_glColor3ubv(void *_glfuncs, const GLubyte* v);
void gl1_5_glColor3ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue);
void gl1_5_glColor3sv(void *_glfuncs, const GLshort* v);
void gl1_5_glColor3s(void *_glfuncs, GLshort red, GLshort green, GLshort blue);
void gl1_5_glColor3iv(void *_glfuncs, const GLint* v);
void gl1_5_glColor3i(void *_glfuncs, GLint red, GLint green, GLint blue);
void gl1_5_glColor3fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glColor3f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue);
void gl1_5_glColor3dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glColor3d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue);
void gl1_5_glColor3bv(void *_glfuncs, const GLbyte* v);
void gl1_5_glColor3b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue);
void gl1_5_glBitmap(void *_glfuncs, GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap);
void gl1_5_glBegin(void *_glfuncs, GLenum mode);
void gl1_5_glListBase(void *_glfuncs, GLuint base);
GLuint gl1_5_glGenLists(void *_glfuncs, GLsizei range_);
void gl1_5_glDeleteLists(void *_glfuncs, GLuint list, GLsizei range_);
void gl1_5_glCallLists(void *_glfuncs, GLsizei n, GLenum gltype, const GLvoid* lists);
void gl1_5_glCallList(void *_glfuncs, GLuint list);
void gl1_5_glEndList(void *_glfuncs);
void gl1_5_glNewList(void *_glfuncs, GLuint list, GLenum mode);
void gl1_5_glPushClientAttrib(void *_glfuncs, GLbitfield mask);
void gl1_5_glPopClientAttrib(void *_glfuncs);
void gl1_5_glPrioritizeTextures(void *_glfuncs, GLsizei n, const GLuint* textures, const GLfloat* priorities);
GLboolean gl1_5_glAreTexturesResident(void *_glfuncs, GLsizei n, const GLuint* textures, GLboolean* residences);
void gl1_5_glVertexPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_5_glTexCoordPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_5_glNormalPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_5_glInterleavedArrays(void *_glfuncs, GLenum format, GLsizei stride, const GLvoid* pointer);
void gl1_5_glIndexPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_5_glEnableClientState(void *_glfuncs, GLenum array);
void gl1_5_glEdgeFlagPointer(void *_glfuncs, GLsizei stride, const GLvoid* pointer);
void gl1_5_glDisableClientState(void *_glfuncs, GLenum array);
void gl1_5_glColorPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_5_glArrayElement(void *_glfuncs, GLint i);
void gl1_5_glResetMinmax(void *_glfuncs, GLenum target);
void gl1_5_glResetHistogram(void *_glfuncs, GLenum target);
void gl1_5_glMinmax(void *_glfuncs, GLenum target, GLenum internalFormat, GLboolean sink);
void gl1_5_glHistogram(void *_glfuncs, GLenum target, GLsizei width, GLenum internalFormat, GLboolean sink);
void gl1_5_glGetMinmaxParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_5_glGetMinmaxParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_5_glGetMinmax(void *_glfuncs, GLenum target, GLboolean reset, GLenum format, GLenum gltype, GLvoid* values);
void gl1_5_glGetHistogramParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_5_glGetHistogramParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_5_glGetHistogram(void *_glfuncs, GLenum target, GLboolean reset, GLenum format, GLenum gltype, GLvoid* values);
void gl1_5_glSeparableFilter2D(void *_glfuncs, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* row, const GLvoid* column);
void gl1_5_glGetSeparableFilter(void *_glfuncs, GLenum target, GLenum format, GLenum gltype, GLvoid* row, GLvoid* column, GLvoid* span);
void gl1_5_glGetConvolutionParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_5_glGetConvolutionParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_5_glGetConvolutionFilter(void *_glfuncs, GLenum target, GLenum format, GLenum gltype, GLvoid* image);
void gl1_5_glCopyConvolutionFilter2D(void *_glfuncs, GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height);
void gl1_5_glCopyConvolutionFilter1D(void *_glfuncs, GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width);
void gl1_5_glConvolutionParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_5_glConvolutionParameteri(void *_glfuncs, GLenum target, GLenum pname, GLint params);
void gl1_5_glConvolutionParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_5_glConvolutionParameterf(void *_glfuncs, GLenum target, GLenum pname, GLfloat params);
void gl1_5_glConvolutionFilter2D(void *_glfuncs, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLenum format, GLenum gltype, const GLvoid* image);
void gl1_5_glConvolutionFilter1D(void *_glfuncs, GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum gltype, const GLvoid* image);
void gl1_5_glCopyColorSubTable(void *_glfuncs, GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
void gl1_5_glColorSubTable(void *_glfuncs, GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum gltype, const GLvoid* data);
void gl1_5_glGetColorTableParameteriv(void *_glfuncs, GLenum target, GLenum pname, GLint* params);
void gl1_5_glGetColorTableParameterfv(void *_glfuncs, GLenum target, GLenum pname, GLfloat* params);
void gl1_5_glGetColorTable(void *_glfuncs, GLenum target, GLenum format, GLenum gltype, GLvoid* table);
void gl1_5_glCopyColorTable(void *_glfuncs, GLenum target, GLenum internalFormat, GLint x, GLint y, GLsizei width);
void gl1_5_glColorTableParameteriv(void *_glfuncs, GLenum target, GLenum pname, const GLint* params);
void gl1_5_glColorTableParameterfv(void *_glfuncs, GLenum target, GLenum pname, const GLfloat* params);
void gl1_5_glColorTable(void *_glfuncs, GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum gltype, const GLvoid* table);
void gl1_5_glMultTransposeMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_5_glMultTransposeMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_5_glLoadTransposeMatrixd(void *_glfuncs, const GLdouble* m);
void gl1_5_glLoadTransposeMatrixf(void *_glfuncs, const GLfloat* m);
void gl1_5_glMultiTexCoord4sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_5_glMultiTexCoord4s(void *_glfuncs, GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
void gl1_5_glMultiTexCoord4iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_5_glMultiTexCoord4i(void *_glfuncs, GLenum target, GLint s, GLint t, GLint r, GLint q);
void gl1_5_glMultiTexCoord4fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_5_glMultiTexCoord4f(void *_glfuncs, GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void gl1_5_glMultiTexCoord4dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_5_glMultiTexCoord4d(void *_glfuncs, GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void gl1_5_glMultiTexCoord3sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_5_glMultiTexCoord3s(void *_glfuncs, GLenum target, GLshort s, GLshort t, GLshort r);
void gl1_5_glMultiTexCoord3iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_5_glMultiTexCoord3i(void *_glfuncs, GLenum target, GLint s, GLint t, GLint r);
void gl1_5_glMultiTexCoord3fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_5_glMultiTexCoord3f(void *_glfuncs, GLenum target, GLfloat s, GLfloat t, GLfloat r);
void gl1_5_glMultiTexCoord3dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_5_glMultiTexCoord3d(void *_glfuncs, GLenum target, GLdouble s, GLdouble t, GLdouble r);
void gl1_5_glMultiTexCoord2sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_5_glMultiTexCoord2s(void *_glfuncs, GLenum target, GLshort s, GLshort t);
void gl1_5_glMultiTexCoord2iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_5_glMultiTexCoord2i(void *_glfuncs, GLenum target, GLint s, GLint t);
void gl1_5_glMultiTexCoord2fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_5_glMultiTexCoord2f(void *_glfuncs, GLenum target, GLfloat s, GLfloat t);
void gl1_5_glMultiTexCoord2dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_5_glMultiTexCoord2d(void *_glfuncs, GLenum target, GLdouble s, GLdouble t);
void gl1_5_glMultiTexCoord1sv(void *_glfuncs, GLenum target, const GLshort* v);
void gl1_5_glMultiTexCoord1s(void *_glfuncs, GLenum target, GLshort s);
void gl1_5_glMultiTexCoord1iv(void *_glfuncs, GLenum target, const GLint* v);
void gl1_5_glMultiTexCoord1i(void *_glfuncs, GLenum target, GLint s);
void gl1_5_glMultiTexCoord1fv(void *_glfuncs, GLenum target, const GLfloat* v);
void gl1_5_glMultiTexCoord1f(void *_glfuncs, GLenum target, GLfloat s);
void gl1_5_glMultiTexCoord1dv(void *_glfuncs, GLenum target, const GLdouble* v);
void gl1_5_glMultiTexCoord1d(void *_glfuncs, GLenum target, GLdouble s);
void gl1_5_glClientActiveTexture(void *_glfuncs, GLenum texture);
void gl1_5_glWindowPos3sv(void *_glfuncs, const GLshort* v);
void gl1_5_glWindowPos3s(void *_glfuncs, GLshort x, GLshort y, GLshort z);
void gl1_5_glWindowPos3iv(void *_glfuncs, const GLint* v);
void gl1_5_glWindowPos3i(void *_glfuncs, GLint x, GLint y, GLint z);
void gl1_5_glWindowPos3fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glWindowPos3f(void *_glfuncs, GLfloat x, GLfloat y, GLfloat z);
void gl1_5_glWindowPos3dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glWindowPos3d(void *_glfuncs, GLdouble x, GLdouble y, GLdouble z);
void gl1_5_glWindowPos2sv(void *_glfuncs, const GLshort* v);
void gl1_5_glWindowPos2s(void *_glfuncs, GLshort x, GLshort y);
void gl1_5_glWindowPos2iv(void *_glfuncs, const GLint* v);
void gl1_5_glWindowPos2i(void *_glfuncs, GLint x, GLint y);
void gl1_5_glWindowPos2fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glWindowPos2f(void *_glfuncs, GLfloat x, GLfloat y);
void gl1_5_glWindowPos2dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glWindowPos2d(void *_glfuncs, GLdouble x, GLdouble y);
void gl1_5_glSecondaryColorPointer(void *_glfuncs, GLint size, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_5_glSecondaryColor3usv(void *_glfuncs, const GLushort* v);
void gl1_5_glSecondaryColor3us(void *_glfuncs, GLushort red, GLushort green, GLushort blue);
void gl1_5_glSecondaryColor3uiv(void *_glfuncs, const GLuint* v);
void gl1_5_glSecondaryColor3ui(void *_glfuncs, GLuint red, GLuint green, GLuint blue);
void gl1_5_glSecondaryColor3ubv(void *_glfuncs, const GLubyte* v);
void gl1_5_glSecondaryColor3ub(void *_glfuncs, GLubyte red, GLubyte green, GLubyte blue);
void gl1_5_glSecondaryColor3sv(void *_glfuncs, const GLshort* v);
void gl1_5_glSecondaryColor3s(void *_glfuncs, GLshort red, GLshort green, GLshort blue);
void gl1_5_glSecondaryColor3iv(void *_glfuncs, const GLint* v);
void gl1_5_glSecondaryColor3i(void *_glfuncs, GLint red, GLint green, GLint blue);
void gl1_5_glSecondaryColor3fv(void *_glfuncs, const GLfloat* v);
void gl1_5_glSecondaryColor3f(void *_glfuncs, GLfloat red, GLfloat green, GLfloat blue);
void gl1_5_glSecondaryColor3dv(void *_glfuncs, const GLdouble* v);
void gl1_5_glSecondaryColor3d(void *_glfuncs, GLdouble red, GLdouble green, GLdouble blue);
void gl1_5_glSecondaryColor3bv(void *_glfuncs, const GLbyte* v);
void gl1_5_glSecondaryColor3b(void *_glfuncs, GLbyte red, GLbyte green, GLbyte blue);
void gl1_5_glFogCoordPointer(void *_glfuncs, GLenum gltype, GLsizei stride, const GLvoid* pointer);
void gl1_5_glFogCoorddv(void *_glfuncs, const GLdouble* coord);
void gl1_5_glFogCoordd(void *_glfuncs, GLdouble coord);
void gl1_5_glFogCoordfv(void *_glfuncs, const GLfloat* coord);
void gl1_5_glFogCoordf(void *_glfuncs, GLfloat coord);


#ifdef __cplusplus
} // extern "C"
#endif
