#ifndef GRADIENT_OPERATORS_CV_H
#define GRADIENT_OPERATORS_CV_H

#include <opencv2/core/core_c.h>

namespace edpf {

/// Compute color image gradient
void ComputeGradientMapByPrewitt(IplImage *smoothImg, short *gradImg, unsigned char *dirImg, int GRADIENT_THRESH);

} // namespace edpf

#endif
