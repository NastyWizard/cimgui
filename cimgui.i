%module cimgui
%{
/* Includes the header in the wrapper code */
#include "cimgui.h"
%}

/* Parse the header file to generate wrappers */
%include "typemaps.i"
%include "cimgui.h"