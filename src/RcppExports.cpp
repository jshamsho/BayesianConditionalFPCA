// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cppgetX
void cppgetX(arma::mat& EtaM, arma::cube& EtaV, arma::mat& X, arma::mat& newX, int cores);
RcppExport SEXP _BayesianConditionalFPCA_cppgetX(SEXP EtaMSEXP, SEXP EtaVSEXP, SEXP XSEXP, SEXP newXSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type EtaM(EtaMSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type EtaV(EtaVSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type newX(newXSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    cppgetX(EtaM, EtaV, X, newX, cores);
    return R_NilValue;
END_RCPP
}
// cppupdateall
void cppupdateall(arma::mat& Theta, arma::mat& Lambda, arma::vec& precision, arma::mat& newX, arma::mat& B, arma::mat& newY, arma::uword K);
RcppExport SEXP _BayesianConditionalFPCA_cppupdateall(SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP precisionSEXP, SEXP newXSEXP, SEXP BSEXP, SEXP newYSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type newX(newXSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type newY(newYSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type K(KSEXP);
    cppupdateall(Theta, Lambda, precision, newX, B, newY, K);
    return R_NilValue;
END_RCPP
}
// cppupdateall_Proj
void cppupdateall_Proj(arma::mat& Theta, arma::mat& Lambda, arma::vec& Phi, arma::mat& newX, arma::mat& newY, arma::uword K);
RcppExport SEXP _BayesianConditionalFPCA_cppupdateall_Proj(SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP PhiSEXP, SEXP newXSEXP, SEXP newYSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Phi(PhiSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type newX(newXSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type newY(newYSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type K(KSEXP);
    cppupdateall_Proj(Theta, Lambda, Phi, newX, newY, K);
    return R_NilValue;
END_RCPP
}
// cppupdateeta
void cppupdateeta(arma::mat& Theta, arma::mat& Lambda, arma::vec& precision, arma::mat& EtaM, arma::cube& EtaV, arma::mat& X, arma::mat& B, arma::mat& Y, double K);
RcppExport SEXP _BayesianConditionalFPCA_cppupdateeta(SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP precisionSEXP, SEXP EtaMSEXP, SEXP EtaVSEXP, SEXP XSEXP, SEXP BSEXP, SEXP YSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type EtaM(EtaMSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type EtaV(EtaVSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type K(KSEXP);
    cppupdateeta(Theta, Lambda, precision, EtaM, EtaV, X, B, Y, K);
    return R_NilValue;
END_RCPP
}
// cppupdateeta_Proj
void cppupdateeta_Proj(arma::mat& Theta, arma::mat& Lambda, arma::vec& Phi, arma::mat& EtaM, arma::cube& EtaV, arma::mat& X, arma::mat& Y, double K);
RcppExport SEXP _BayesianConditionalFPCA_cppupdateeta_Proj(SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP PhiSEXP, SEXP EtaMSEXP, SEXP EtaVSEXP, SEXP XSEXP, SEXP YSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Phi(PhiSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type EtaM(EtaMSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type EtaV(EtaVSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type K(KSEXP);
    cppupdateeta_Proj(Theta, Lambda, Phi, EtaM, EtaV, X, Y, K);
    return R_NilValue;
END_RCPP
}
// cpploglik
double cpploglik(arma::mat& Theta, arma::mat& Lambda, arma::vec& precision, arma::mat& X, arma::mat& B, arma::mat& Y, arma::uword K, int cores);
RcppExport SEXP _BayesianConditionalFPCA_cpploglik(SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP precisionSEXP, SEXP XSEXP, SEXP BSEXP, SEXP YSEXP, SEXP KSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpploglik(Theta, Lambda, precision, X, B, Y, K, cores));
    return rcpp_result_gen;
END_RCPP
}
// cpploglik_Proj
double cpploglik_Proj(arma::mat& Theta, arma::mat& Lambda, arma::vec& Phi, arma::mat& X, arma::mat& Y, arma::uword K, int cores);
RcppExport SEXP _BayesianConditionalFPCA_cpploglik_Proj(SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP PhiSEXP, SEXP XSEXP, SEXP YSEXP, SEXP KSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Phi(PhiSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpploglik_Proj(Theta, Lambda, Phi, X, Y, K, cores));
    return rcpp_result_gen;
END_RCPP
}
// completeY2Means
void completeY2Means(arma::mat& Y, arma::uvec missing_sub, arma::uvec missing_time);
RcppExport SEXP _BayesianConditionalFPCA_completeY2Means(SEXP YSEXP, SEXP missing_subSEXP, SEXP missing_timeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type missing_sub(missing_subSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type missing_time(missing_timeSEXP);
    completeY2Means(Y, missing_sub, missing_time);
    return R_NilValue;
END_RCPP
}
// cpp_EM2
Rcpp::List cpp_EM2(arma::mat X, arma::mat B, arma::mat Y, arma::uword K, double tol, arma::uword max_iter);
RcppExport SEXP _BayesianConditionalFPCA_cpp_EM2(SEXP XSEXP, SEXP BSEXP, SEXP YSEXP, SEXP KSEXP, SEXP tolSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_EM2(X, B, Y, K, tol, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// cpp_EM
List cpp_EM(arma::mat X, arma::mat B, arma::mat Y, arma::uword K, arma::mat Theta_init, int cores);
RcppExport SEXP _BayesianConditionalFPCA_cpp_EM(SEXP XSEXP, SEXP BSEXP, SEXP YSEXP, SEXP KSEXP, SEXP Theta_initSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta_init(Theta_initSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_EM(X, B, Y, K, Theta_init, cores));
    return rcpp_result_gen;
END_RCPP
}
// cpp_EM_Proj
List cpp_EM_Proj(arma::mat X, arma::mat Y, arma::uword K, arma::mat Theta_init, int cores);
RcppExport SEXP _BayesianConditionalFPCA_cpp_EM_Proj(SEXP XSEXP, SEXP YSEXP, SEXP KSEXP, SEXP Theta_initSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta_init(Theta_initSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_EM_Proj(X, Y, K, Theta_init, cores));
    return rcpp_result_gen;
END_RCPP
}
// cpp_EM_new
List cpp_EM_new(arma::mat X, arma::mat B, arma::mat Y, arma::uword K, arma::mat Theta_init, arma::mat Lambda_init, int cores);
RcppExport SEXP _BayesianConditionalFPCA_cpp_EM_new(SEXP XSEXP, SEXP BSEXP, SEXP YSEXP, SEXP KSEXP, SEXP Theta_initSEXP, SEXP Lambda_initSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta_init(Theta_initSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda_init(Lambda_initSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_EM_new(X, B, Y, K, Theta_init, Lambda_init, cores));
    return rcpp_result_gen;
END_RCPP
}
// get_proposal
double get_proposal(double old);
RcppExport SEXP _BayesianConditionalFPCA_get_proposal(SEXP oldSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type old(oldSEXP);
    rcpp_result_gen = Rcpp::wrap(get_proposal(old));
    return rcpp_result_gen;
END_RCPP
}
// armadillo_modulus2
arma::uvec armadillo_modulus2(arma::uvec indicies, arma::uword n);
RcppExport SEXP _BayesianConditionalFPCA_armadillo_modulus2(SEXP indiciesSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type indicies(indiciesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(armadillo_modulus2(indicies, n));
    return rcpp_result_gen;
END_RCPP
}
// armadillo_modulus3
arma::uvec armadillo_modulus3(arma::uvec indicies, arma::uword n);
RcppExport SEXP _BayesianConditionalFPCA_armadillo_modulus3(SEXP indiciesSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type indicies(indiciesSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(armadillo_modulus3(indicies, n));
    return rcpp_result_gen;
END_RCPP
}
// get_omnibus_fit
List get_omnibus_fit(List mod);
RcppExport SEXP _BayesianConditionalFPCA_get_omnibus_fit(SEXP modSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mod(modSEXP);
    rcpp_result_gen = Rcpp::wrap(get_omnibus_fit(mod));
    return rcpp_result_gen;
END_RCPP
}
// get_omnibus_fit2
List get_omnibus_fit2(List mod);
RcppExport SEXP _BayesianConditionalFPCA_get_omnibus_fit2(SEXP modSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mod(modSEXP);
    rcpp_result_gen = Rcpp::wrap(get_omnibus_fit2(mod));
    return rcpp_result_gen;
END_RCPP
}
// DiffOp
arma::mat DiffOp(arma::uword n);
RcppExport SEXP _BayesianConditionalFPCA_DiffOp(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(DiffOp(n));
    return rcpp_result_gen;
END_RCPP
}
// getPenalty2
arma::mat getPenalty2(arma::uword n, arma::uword D);
RcppExport SEXP _BayesianConditionalFPCA_getPenalty2(SEXP nSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(getPenalty2(n, D));
    return rcpp_result_gen;
END_RCPP
}
// getPenalty
arma::mat getPenalty(arma::uword n);
RcppExport SEXP _BayesianConditionalFPCA_getPenalty(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uword >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(getPenalty(n));
    return rcpp_result_gen;
END_RCPP
}
// initializeY
arma::rowvec initializeY(arma::vec y, arma::vec observedTimes, arma::vec fullTimes);
RcppExport SEXP _BayesianConditionalFPCA_initializeY(SEXP ySEXP, SEXP observedTimesSEXP, SEXP fullTimesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::vec >::type observedTimes(observedTimesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type fullTimes(fullTimesSEXP);
    rcpp_result_gen = Rcpp::wrap(initializeY(y, observedTimes, fullTimes));
    return rcpp_result_gen;
END_RCPP
}
// getObservedOrder
arma::uvec getObservedOrder(arma::vec observedTimes, arma::vec fullTimes);
RcppExport SEXP _BayesianConditionalFPCA_getObservedOrder(SEXP observedTimesSEXP, SEXP fullTimesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type observedTimes(observedTimesSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type fullTimes(fullTimesSEXP);
    rcpp_result_gen = Rcpp::wrap(getObservedOrder(observedTimes, fullTimes));
    return rcpp_result_gen;
END_RCPP
}
// PredictY
void PredictY(arma::mat& ImputedY, arma::mat X, arma::mat B, arma::mat Theta, arma::mat Eta, arma::cube Lambda, double Prec);
RcppExport SEXP _BayesianConditionalFPCA_PredictY(SEXP ImputedYSEXP, SEXP XSEXP, SEXP BSEXP, SEXP ThetaSEXP, SEXP EtaSEXP, SEXP LambdaSEXP, SEXP PrecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type ImputedY(ImputedYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Eta(EtaSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< double >::type Prec(PrecSEXP);
    PredictY(ImputedY, X, B, Theta, Eta, Lambda, Prec);
    return R_NilValue;
END_RCPP
}
// PredictY2
void PredictY2(arma::mat& ImputedY, arma::field<arma::uvec> observedOrder, arma::mat X, arma::mat B, arma::mat Theta, arma::cube Lambda, arma::mat Eta, double Prec);
RcppExport SEXP _BayesianConditionalFPCA_PredictY2(SEXP ImputedYSEXP, SEXP observedOrderSEXP, SEXP XSEXP, SEXP BSEXP, SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP EtaSEXP, SEXP PrecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type ImputedY(ImputedYSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::uvec> >::type observedOrder(observedOrderSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Eta(EtaSEXP);
    Rcpp::traits::input_parameter< double >::type Prec(PrecSEXP);
    PredictY2(ImputedY, observedOrder, X, B, Theta, Lambda, Eta, Prec);
    return R_NilValue;
END_RCPP
}
// Proposal
Rcpp::List Proposal(arma::vec Theta, arma::mat Lambda, double noise, arma::uword samples);
RcppExport SEXP _BayesianConditionalFPCA_Proposal(SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP noiseSEXP, SEXP samplesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< double >::type noise(noiseSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type samples(samplesSEXP);
    rcpp_result_gen = Rcpp::wrap(Proposal(Theta, Lambda, noise, samples));
    return rcpp_result_gen;
END_RCPP
}
// cpploglik_bayes
double cpploglik_bayes(arma::mat& Theta, arma::cube& Lambda, double precision, arma::vec& Phi, arma::mat& X, arma::mat& B, arma::mat& Y, int cores);
RcppExport SEXP _BayesianConditionalFPCA_cpploglik_bayes(SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP precisionSEXP, SEXP PhiSEXP, SEXP XSEXP, SEXP BSEXP, SEXP YSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< double >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type Phi(PhiSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpploglik_bayes(Theta, Lambda, precision, Phi, X, B, Y, cores));
    return rcpp_result_gen;
END_RCPP
}
// find_stepsize
void find_stepsize(arma::mat& Y, arma::mat& Theta, arma::cube& Lambda, double prec, arma::mat& X, arma::mat& B, double noise);
RcppExport SEXP _BayesianConditionalFPCA_find_stepsize(SEXP YSEXP, SEXP ThetaSEXP, SEXP LambdaSEXP, SEXP precSEXP, SEXP XSEXP, SEXP BSEXP, SEXP noiseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type Theta(ThetaSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type Lambda(LambdaSEXP);
    Rcpp::traits::input_parameter< double >::type prec(precSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type B(BSEXP);
    Rcpp::traits::input_parameter< double >::type noise(noiseSEXP);
    find_stepsize(Y, Theta, Lambda, prec, X, B, noise);
    return R_NilValue;
END_RCPP
}
// dmvnrm_arma_fast
double dmvnrm_arma_fast(arma::mat const& x, arma::rowvec const& mean, arma::mat const& sigma, bool const logd);
RcppExport SEXP _BayesianConditionalFPCA_dmvnrm_arma_fast(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec const& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool const >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma_fast(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// calculate_waic_cpp
void calculate_waic_cpp(Rcpp::List& mcmc_output, Rcpp::List& observed_time, arma::mat& waic_return);
RcppExport SEXP _BayesianConditionalFPCA_calculate_waic_cpp(SEXP mcmc_outputSEXP, SEXP observed_timeSEXP, SEXP waic_returnSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type mcmc_output(mcmc_outputSEXP);
    Rcpp::traits::input_parameter< Rcpp::List& >::type observed_time(observed_timeSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type waic_return(waic_returnSEXP);
    calculate_waic_cpp(mcmc_output, observed_time, waic_return);
    return R_NilValue;
END_RCPP
}
// get_posterior_predictive_bands
arma::mat get_posterior_predictive_bands(List mod, arma::vec quantiles);
RcppExport SEXP _BayesianConditionalFPCA_get_posterior_predictive_bands(SEXP modSEXP, SEXP quantilesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mod(modSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type quantiles(quantilesSEXP);
    rcpp_result_gen = Rcpp::wrap(get_posterior_predictive_bands(mod, quantiles));
    return rcpp_result_gen;
END_RCPP
}
// get_posterior_predictive_bands2
arma::mat get_posterior_predictive_bands2(List mod, arma::vec quantiles);
RcppExport SEXP _BayesianConditionalFPCA_get_posterior_predictive_bands2(SEXP modSEXP, SEXP quantilesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mod(modSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type quantiles(quantilesSEXP);
    rcpp_result_gen = Rcpp::wrap(get_posterior_predictive_bands2(mod, quantiles));
    return rcpp_result_gen;
END_RCPP
}
// get_posterior_subject_bands_cpp
Rcpp::List get_posterior_subject_bands_cpp(List mcmc_output, double alpha, std::string mode);
RcppExport SEXP _BayesianConditionalFPCA_get_posterior_subject_bands_cpp(SEXP mcmc_outputSEXP, SEXP alphaSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mcmc_output(mcmc_outputSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< std::string >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_posterior_subject_bands_cpp(mcmc_output, alpha, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_prediction_error
arma::vec get_prediction_error(List mcmc_output, double alpha);
RcppExport SEXP _BayesianConditionalFPCA_get_prediction_error(SEXP mcmc_outputSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mcmc_output(mcmc_outputSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_prediction_error(mcmc_output, alpha));
    return rcpp_result_gen;
END_RCPP
}
// get_posterior_means_cpp_correct
arma::mat get_posterior_means_cpp_correct(List mcmc_results, arma::vec xi, double alpha, std::string mode);
RcppExport SEXP _BayesianConditionalFPCA_get_posterior_means_cpp_correct(SEXP mcmc_resultsSEXP, SEXP xiSEXP, SEXP alphaSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mcmc_results(mcmc_resultsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< std::string >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_posterior_means_cpp_correct(mcmc_results, xi, alpha, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_posterior_coefs
List get_posterior_coefs(List mod, double alpha);
RcppExport SEXP _BayesianConditionalFPCA_get_posterior_coefs(SEXP modSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type mod(modSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(get_posterior_coefs(mod, alpha));
    return rcpp_result_gen;
END_RCPP
}
// arma_cov2cor
arma::mat arma_cov2cor(arma::mat V);
RcppExport SEXP _BayesianConditionalFPCA_arma_cov2cor(SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(arma_cov2cor(V));
    return rcpp_result_gen;
END_RCPP
}
// get_posterior_eigen_cpp_correct
List get_posterior_eigen_cpp_correct(Rcpp::List mcmc_results, arma::uword eigenvals, arma::vec zi, double alpha, std::string mode);
RcppExport SEXP _BayesianConditionalFPCA_get_posterior_eigen_cpp_correct(SEXP mcmc_resultsSEXP, SEXP eigenvalsSEXP, SEXP ziSEXP, SEXP alphaSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type mcmc_results(mcmc_resultsSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type eigenvals(eigenvalsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type zi(ziSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< std::string >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_posterior_eigen_cpp_correct(mcmc_results, eigenvals, zi, alpha, mode));
    return rcpp_result_gen;
END_RCPP
}
// get_posterior_covariance_cpp
Rcpp::List get_posterior_covariance_cpp(Rcpp::List mcmc_results, arma::vec zi);
RcppExport SEXP _BayesianConditionalFPCA_get_posterior_covariance_cpp(SEXP mcmc_resultsSEXP, SEXP ziSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type mcmc_results(mcmc_resultsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type zi(ziSEXP);
    rcpp_result_gen = Rcpp::wrap(get_posterior_covariance_cpp(mcmc_results, zi));
    return rcpp_result_gen;
END_RCPP
}
// run_mcmc
Rcpp::List run_mcmc(arma::mat response, arma::mat design_mean, arma::mat design_var, arma::mat basis, arma::vec time, arma::field<arma::mat> penalties_mean, arma::field<arma::mat> penalties_var, arma::uvec indices_mean, arma::uvec indices_var, arma::uword kdim, arma::uword iter, arma::uword burnin, arma::uword thin, std::string var);
RcppExport SEXP _BayesianConditionalFPCA_run_mcmc(SEXP responseSEXP, SEXP design_meanSEXP, SEXP design_varSEXP, SEXP basisSEXP, SEXP timeSEXP, SEXP penalties_meanSEXP, SEXP penalties_varSEXP, SEXP indices_meanSEXP, SEXP indices_varSEXP, SEXP kdimSEXP, SEXP iterSEXP, SEXP burninSEXP, SEXP thinSEXP, SEXP varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type response(responseSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type design_mean(design_meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type design_var(design_varSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type basis(basisSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type time(timeSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::mat> >::type penalties_mean(penalties_meanSEXP);
    Rcpp::traits::input_parameter< arma::field<arma::mat> >::type penalties_var(penalties_varSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type indices_mean(indices_meanSEXP);
    Rcpp::traits::input_parameter< arma::uvec >::type indices_var(indices_varSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type kdim(kdimSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< arma::uword >::type thin(thinSEXP);
    Rcpp::traits::input_parameter< std::string >::type var(varSEXP);
    rcpp_result_gen = Rcpp::wrap(run_mcmc(response, design_mean, design_var, basis, time, penalties_mean, penalties_var, indices_mean, indices_var, kdim, iter, burnin, thin, var));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BayesianConditionalFPCA_cppgetX", (DL_FUNC) &_BayesianConditionalFPCA_cppgetX, 5},
    {"_BayesianConditionalFPCA_cppupdateall", (DL_FUNC) &_BayesianConditionalFPCA_cppupdateall, 7},
    {"_BayesianConditionalFPCA_cppupdateall_Proj", (DL_FUNC) &_BayesianConditionalFPCA_cppupdateall_Proj, 6},
    {"_BayesianConditionalFPCA_cppupdateeta", (DL_FUNC) &_BayesianConditionalFPCA_cppupdateeta, 9},
    {"_BayesianConditionalFPCA_cppupdateeta_Proj", (DL_FUNC) &_BayesianConditionalFPCA_cppupdateeta_Proj, 8},
    {"_BayesianConditionalFPCA_cpploglik", (DL_FUNC) &_BayesianConditionalFPCA_cpploglik, 8},
    {"_BayesianConditionalFPCA_cpploglik_Proj", (DL_FUNC) &_BayesianConditionalFPCA_cpploglik_Proj, 7},
    {"_BayesianConditionalFPCA_completeY2Means", (DL_FUNC) &_BayesianConditionalFPCA_completeY2Means, 3},
    {"_BayesianConditionalFPCA_cpp_EM2", (DL_FUNC) &_BayesianConditionalFPCA_cpp_EM2, 6},
    {"_BayesianConditionalFPCA_cpp_EM", (DL_FUNC) &_BayesianConditionalFPCA_cpp_EM, 6},
    {"_BayesianConditionalFPCA_cpp_EM_Proj", (DL_FUNC) &_BayesianConditionalFPCA_cpp_EM_Proj, 5},
    {"_BayesianConditionalFPCA_cpp_EM_new", (DL_FUNC) &_BayesianConditionalFPCA_cpp_EM_new, 7},
    {"_BayesianConditionalFPCA_get_proposal", (DL_FUNC) &_BayesianConditionalFPCA_get_proposal, 1},
    {"_BayesianConditionalFPCA_armadillo_modulus2", (DL_FUNC) &_BayesianConditionalFPCA_armadillo_modulus2, 2},
    {"_BayesianConditionalFPCA_armadillo_modulus3", (DL_FUNC) &_BayesianConditionalFPCA_armadillo_modulus3, 2},
    {"_BayesianConditionalFPCA_get_omnibus_fit", (DL_FUNC) &_BayesianConditionalFPCA_get_omnibus_fit, 1},
    {"_BayesianConditionalFPCA_get_omnibus_fit2", (DL_FUNC) &_BayesianConditionalFPCA_get_omnibus_fit2, 1},
    {"_BayesianConditionalFPCA_DiffOp", (DL_FUNC) &_BayesianConditionalFPCA_DiffOp, 1},
    {"_BayesianConditionalFPCA_getPenalty2", (DL_FUNC) &_BayesianConditionalFPCA_getPenalty2, 2},
    {"_BayesianConditionalFPCA_getPenalty", (DL_FUNC) &_BayesianConditionalFPCA_getPenalty, 1},
    {"_BayesianConditionalFPCA_initializeY", (DL_FUNC) &_BayesianConditionalFPCA_initializeY, 3},
    {"_BayesianConditionalFPCA_getObservedOrder", (DL_FUNC) &_BayesianConditionalFPCA_getObservedOrder, 2},
    {"_BayesianConditionalFPCA_PredictY", (DL_FUNC) &_BayesianConditionalFPCA_PredictY, 7},
    {"_BayesianConditionalFPCA_PredictY2", (DL_FUNC) &_BayesianConditionalFPCA_PredictY2, 8},
    {"_BayesianConditionalFPCA_Proposal", (DL_FUNC) &_BayesianConditionalFPCA_Proposal, 4},
    {"_BayesianConditionalFPCA_cpploglik_bayes", (DL_FUNC) &_BayesianConditionalFPCA_cpploglik_bayes, 8},
    {"_BayesianConditionalFPCA_find_stepsize", (DL_FUNC) &_BayesianConditionalFPCA_find_stepsize, 7},
    {"_BayesianConditionalFPCA_dmvnrm_arma_fast", (DL_FUNC) &_BayesianConditionalFPCA_dmvnrm_arma_fast, 4},
    {"_BayesianConditionalFPCA_calculate_waic_cpp", (DL_FUNC) &_BayesianConditionalFPCA_calculate_waic_cpp, 3},
    {"_BayesianConditionalFPCA_get_posterior_predictive_bands", (DL_FUNC) &_BayesianConditionalFPCA_get_posterior_predictive_bands, 2},
    {"_BayesianConditionalFPCA_get_posterior_predictive_bands2", (DL_FUNC) &_BayesianConditionalFPCA_get_posterior_predictive_bands2, 2},
    {"_BayesianConditionalFPCA_get_posterior_subject_bands_cpp", (DL_FUNC) &_BayesianConditionalFPCA_get_posterior_subject_bands_cpp, 3},
    {"_BayesianConditionalFPCA_get_prediction_error", (DL_FUNC) &_BayesianConditionalFPCA_get_prediction_error, 2},
    {"_BayesianConditionalFPCA_get_posterior_means_cpp_correct", (DL_FUNC) &_BayesianConditionalFPCA_get_posterior_means_cpp_correct, 4},
    {"_BayesianConditionalFPCA_get_posterior_coefs", (DL_FUNC) &_BayesianConditionalFPCA_get_posterior_coefs, 2},
    {"_BayesianConditionalFPCA_arma_cov2cor", (DL_FUNC) &_BayesianConditionalFPCA_arma_cov2cor, 1},
    {"_BayesianConditionalFPCA_get_posterior_eigen_cpp_correct", (DL_FUNC) &_BayesianConditionalFPCA_get_posterior_eigen_cpp_correct, 5},
    {"_BayesianConditionalFPCA_get_posterior_covariance_cpp", (DL_FUNC) &_BayesianConditionalFPCA_get_posterior_covariance_cpp, 2},
    {"_BayesianConditionalFPCA_run_mcmc", (DL_FUNC) &_BayesianConditionalFPCA_run_mcmc, 14},
    {NULL, NULL, 0}
};

RcppExport void R_init_BayesianConditionalFPCA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
