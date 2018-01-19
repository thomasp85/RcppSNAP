#ifndef RcppSNAP__RcppSNAP__h
#define RcppSNAP__RcppSNAP__h

#if defined(Rcpp_hpp) && !defined(COMPILING_RCPPSNAP)
#error "The file 'Rcpp.h' should not be included. Please correct to include only 'RcppSNAP.h'."
#endif

#include "Snap.h"

// Now automatically include Rcpp as well
#include <Rcpp.h>

#endif

