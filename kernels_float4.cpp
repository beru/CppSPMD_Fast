#include <stdlib.h>
#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <cmath>

#include "cppspmd_float4.h"

#include "cppspmd_type_aliases.h"

#include "mandelbrot_declares.h"
#include "mandelbrot_imp.h"

#include "test_kernel_declares.h"
#include "test_kernel_imp.h"

#include "rt_kernel_declares.h"
#include "rt_kernel_imp.h"

#include "simple_declares.h"
#include "simple_imp.h"

#include "volume_kernel_declares.h"
#include "volume_kernel_imp.h"

#include "noise_kernel_declares.h"
#include "noise_kernel_imp.h"

#include "options_imp.h"
#include "options_declares.h"

#include "ao_bench_declares.h"
#include "ao_bench_imp.h"