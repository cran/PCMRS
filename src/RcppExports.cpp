// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// scoreEPCM
arma::vec scoreEPCM(arma::vec alpha, arma::vec Y, arma::mat X, int Q, int q, int n, int I, int pall, int pX, arma::mat GHprobs, arma::mat GHweights, arma::vec GHnodes, int scaled, double cores, double lambda);
RcppExport SEXP _PCMRS_scoreEPCM(SEXP alphaSEXP, SEXP YSEXP, SEXP XSEXP, SEXP QSEXP, SEXP qSEXP, SEXP nSEXP, SEXP ISEXP, SEXP pallSEXP, SEXP pXSEXP, SEXP GHprobsSEXP, SEXP GHweightsSEXP, SEXP GHnodesSEXP, SEXP scaledSEXP, SEXP coresSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type Q(QSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type pall(pallSEXP);
    Rcpp::traits::input_parameter< int >::type pX(pXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type GHprobs(GHprobsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type GHweights(GHweightsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type GHnodes(GHnodesSEXP);
    Rcpp::traits::input_parameter< int >::type scaled(scaledSEXP);
    Rcpp::traits::input_parameter< double >::type cores(coresSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(scoreEPCM(alpha, Y, X, Q, q, n, I, pall, pX, GHprobs, GHweights, GHnodes, scaled, cores, lambda));
    return rcpp_result_gen;
END_RCPP
}
// loglikEPCM
double loglikEPCM(arma::vec alpha, arma::vec Y, arma::mat X, int Q, int q, int n, int I, int pall, int pX, arma::mat GHprobs, arma::mat GHweights, arma::vec GHnodes, int scaled, int cores, double lambda);
RcppExport SEXP _PCMRS_loglikEPCM(SEXP alphaSEXP, SEXP YSEXP, SEXP XSEXP, SEXP QSEXP, SEXP qSEXP, SEXP nSEXP, SEXP ISEXP, SEXP pallSEXP, SEXP pXSEXP, SEXP GHprobsSEXP, SEXP GHweightsSEXP, SEXP GHnodesSEXP, SEXP scaledSEXP, SEXP coresSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type Q(QSEXP);
    Rcpp::traits::input_parameter< int >::type q(qSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type pall(pallSEXP);
    Rcpp::traits::input_parameter< int >::type pX(pXSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type GHprobs(GHprobsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type GHweights(GHweightsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type GHnodes(GHnodesSEXP);
    Rcpp::traits::input_parameter< int >::type scaled(scaledSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(loglikEPCM(alpha, Y, X, Q, q, n, I, pall, pX, GHprobs, GHweights, GHnodes, scaled, cores, lambda));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PCMRS_scoreEPCM", (DL_FUNC) &_PCMRS_scoreEPCM, 15},
    {"_PCMRS_loglikEPCM", (DL_FUNC) &_PCMRS_loglikEPCM, 15},
    {NULL, NULL, 0}
};

RcppExport void R_init_PCMRS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
