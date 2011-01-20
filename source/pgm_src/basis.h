/* 

Copyright (c) 1995  McGill University and Lee Iverson

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including the rights to use, copy,
modify, merge, publish, and distribute copies of the Software without fee, and
to permit persons to whom the Software is furnished to do so, subject to the
following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Any sale of this software or any work derived from this software shall be
prohibited without written agreement from the copyright holders.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
MCGILL UNIVERSITY BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#ifndef _basis_h_
#define _basis_h_

#include "llconfig.h"

#include <ansidecl.h>

extern double G PARAMS((double x, double s));
extern double dG PARAMS((double x, double s));
extern double d2G PARAMS((double x, double s));
extern double d3G PARAMS((double x, double s));
extern double d4G PARAMS((double x, double s));

extern double Gabor PARAMS((double x, double s, double period, double phase));

extern double HG PARAMS((double x, double s));
extern double HdG PARAMS((double x, double s));
extern double Hd2G PARAMS((double x, double s));

extern float Gf PARAMS((float x, float s));
extern float dGf PARAMS((float x, float s));
extern float d2Gf PARAMS((float x, float s));
extern float d3Gf PARAMS((float x, float s));
extern float d4Gf PARAMS((float x, float s));

extern float Gaborf PARAMS((float x, float s, float period, float phase));

extern float HGf PARAMS((float x, float s));
extern float HdGf PARAMS((float x, float s));
extern float Hd2Gf PARAMS((float x, float s));

#if (defined(__GNUC__) && defined(__OPTIMIZE__))
# define inline extern __inline__
# include "basis-inlines.h"
# undef inline
#endif

#endif /* _basis_h_ */
