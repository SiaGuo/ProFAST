// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// iSCMEBCpp
Rcpp::List iSCMEBCpp(const Rcpp::List& vList, const Rcpp::List& Adjlist, const Rcpp::List& yList_int, const Rcpp::List& Mu_int, const Rcpp::List& Sigma_int, const arma::cube& Psi_int, const double& beta_int, const arma::vec& beta_grid, const int& maxIter_ICM, const int& maxIter, const double& epsLogLik, const bool& verbose, const bool& homo, const bool& Sigma_equal, const bool& Sigma_diag, const bool& Sp_embed, const arma::uword& maxK, const arma::uword& minK, const int& coreNum);
RcppExport SEXP _ProFAST_iSCMEBCpp(SEXP vListSEXP, SEXP AdjlistSEXP, SEXP yList_intSEXP, SEXP Mu_intSEXP, SEXP Sigma_intSEXP, SEXP Psi_intSEXP, SEXP beta_intSEXP, SEXP beta_gridSEXP, SEXP maxIter_ICMSEXP, SEXP maxIterSEXP, SEXP epsLogLikSEXP, SEXP verboseSEXP, SEXP homoSEXP, SEXP Sigma_equalSEXP, SEXP Sigma_diagSEXP, SEXP Sp_embedSEXP, SEXP maxKSEXP, SEXP minKSEXP, SEXP coreNumSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type vList(vListSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Adjlist(AdjlistSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type yList_int(yList_intSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Mu_int(Mu_intSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Sigma_int(Sigma_intSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type Psi_int(Psi_intSEXP);
    Rcpp::traits::input_parameter< const double& >::type beta_int(beta_intSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type beta_grid(beta_gridSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter_ICM(maxIter_ICMSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsLogLik(epsLogLikSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const bool& >::type homo(homoSEXP);
    Rcpp::traits::input_parameter< const bool& >::type Sigma_equal(Sigma_equalSEXP);
    Rcpp::traits::input_parameter< const bool& >::type Sigma_diag(Sigma_diagSEXP);
    Rcpp::traits::input_parameter< const bool& >::type Sp_embed(Sp_embedSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type maxK(maxKSEXP);
    Rcpp::traits::input_parameter< const arma::uword& >::type minK(minKSEXP);
    Rcpp::traits::input_parameter< const int& >::type coreNum(coreNumSEXP);
    rcpp_result_gen = Rcpp::wrap(iSCMEBCpp(vList, Adjlist, yList_int, Mu_int, Sigma_int, Psi_int, beta_int, beta_grid, maxIter_ICM, maxIter, epsLogLik, verbose, homo, Sigma_equal, Sigma_diag, Sp_embed, maxK, minK, coreNum));
    return rcpp_result_gen;
END_RCPP
}
// getneighborhood_fast
arma::sp_umat getneighborhood_fast(const arma::mat x, double radius);
RcppExport SEXP _ProFAST_getneighborhood_fast(SEXP xSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(getneighborhood_fast(x, radius));
    return rcpp_result_gen;
END_RCPP
}
// wpcaCpp
Rcpp::List wpcaCpp(const arma::mat& X, const int& nPCs, const bool& weighted);
RcppExport SEXP _ProFAST_wpcaCpp(SEXP XSEXP, SEXP nPCsSEXP, SEXP weightedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const int& >::type nPCs(nPCsSEXP);
    Rcpp::traits::input_parameter< const bool& >::type weighted(weightedSEXP);
    rcpp_result_gen = Rcpp::wrap(wpcaCpp(X, nPCs, weighted));
    return rcpp_result_gen;
END_RCPP
}
// correct_one_gene
Rcpp::List correct_one_gene(const Rcpp::List& Xlist, const Rcpp::List& RList, const Rcpp::List& HList, const arma::mat& Tm, const Rcpp::List& Adjlist, const arma::vec& sigmaj_int, const arma::vec& psij_int, const arma::vec& alphaj_int, const arma::vec& gammaj_int, const arma::vec& zetaj_int, const int& maxIter, const double& epsELBO, const bool& verbose);
RcppExport SEXP _ProFAST_correct_one_gene(SEXP XlistSEXP, SEXP RListSEXP, SEXP HListSEXP, SEXP TmSEXP, SEXP AdjlistSEXP, SEXP sigmaj_intSEXP, SEXP psij_intSEXP, SEXP alphaj_intSEXP, SEXP gammaj_intSEXP, SEXP zetaj_intSEXP, SEXP maxIterSEXP, SEXP epsELBOSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Xlist(XlistSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type RList(RListSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type HList(HListSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Tm(TmSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Adjlist(AdjlistSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sigmaj_int(sigmaj_intSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type psij_int(psij_intSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type alphaj_int(alphaj_intSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type gammaj_int(gammaj_intSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type zetaj_int(zetaj_intSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsELBO(epsELBOSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(correct_one_gene(Xlist, RList, HList, Tm, Adjlist, sigmaj_int, psij_int, alphaj_int, gammaj_int, zetaj_int, maxIter, epsELBO, verbose));
    return rcpp_result_gen;
END_RCPP
}
// correct_genes
Rcpp::List correct_genes(const Rcpp::List& XList, const Rcpp::List& RList, const Rcpp::List& HList, const arma::mat& Tm, const Rcpp::List& Adjlist, const arma::mat& sigma_int, const arma::mat& psi_int, const arma::mat& alpha_int, const arma::mat& gamma_int, const arma::mat& zeta_int, const int& maxIter, const double& epsELBO, const bool& verbose);
RcppExport SEXP _ProFAST_correct_genes(SEXP XListSEXP, SEXP RListSEXP, SEXP HListSEXP, SEXP TmSEXP, SEXP AdjlistSEXP, SEXP sigma_intSEXP, SEXP psi_intSEXP, SEXP alpha_intSEXP, SEXP gamma_intSEXP, SEXP zeta_intSEXP, SEXP maxIterSEXP, SEXP epsELBOSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type XList(XListSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type RList(RListSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type HList(HListSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Tm(TmSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Adjlist(AdjlistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type sigma_int(sigma_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type psi_int(psi_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type alpha_int(alpha_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type gamma_int(gamma_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type zeta_int(zeta_intSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsELBO(epsELBOSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(correct_genes(XList, RList, HList, Tm, Adjlist, sigma_int, psi_int, alpha_int, gamma_int, zeta_int, maxIter, epsELBO, verbose));
    return rcpp_result_gen;
END_RCPP
}
// pdistance_cpp
arma::mat pdistance_cpp(const arma::mat& Ar, const arma::mat& Br, const float& eta);
RcppExport SEXP _ProFAST_pdistance_cpp(SEXP ArSEXP, SEXP BrSEXP, SEXP etaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Ar(ArSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Br(BrSEXP);
    Rcpp::traits::input_parameter< const float& >::type eta(etaSEXP);
    rcpp_result_gen = Rcpp::wrap(pdistance_cpp(Ar, Br, eta));
    return rcpp_result_gen;
END_RCPP
}
// gene_embed_cpp
arma::mat gene_embed_cpp(const arma::mat& X, const arma::mat& ce_cell);
RcppExport SEXP _ProFAST_gene_embed_cpp(SEXP XSEXP, SEXP ce_cellSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type ce_cell(ce_cellSEXP);
    rcpp_result_gen = Rcpp::wrap(gene_embed_cpp(X, ce_cell));
    return rcpp_result_gen;
END_RCPP
}
// profast_g_cpp
Rcpp:: List profast_g_cpp(const Rcpp::List& Xlist, const Rcpp::List& Adjlist, const arma::mat& nu_int, const arma::mat& W_int, const arma::mat& Lam_int, const arma::cube& Psi_int, const Rcpp::List& EvList, const int& maxIter, const double& epsLogLik, const bool& verbose, const bool& homo, const bool& Psi_diag);
RcppExport SEXP _ProFAST_profast_g_cpp(SEXP XlistSEXP, SEXP AdjlistSEXP, SEXP nu_intSEXP, SEXP W_intSEXP, SEXP Lam_intSEXP, SEXP Psi_intSEXP, SEXP EvListSEXP, SEXP maxIterSEXP, SEXP epsLogLikSEXP, SEXP verboseSEXP, SEXP homoSEXP, SEXP Psi_diagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Xlist(XlistSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Adjlist(AdjlistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type nu_int(nu_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type W_int(W_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lam_int(Lam_intSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type Psi_int(Psi_intSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type EvList(EvListSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsLogLik(epsLogLikSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const bool& >::type homo(homoSEXP);
    Rcpp::traits::input_parameter< const bool& >::type Psi_diag(Psi_diagSEXP);
    rcpp_result_gen = Rcpp::wrap(profast_g_cpp(Xlist, Adjlist, nu_int, W_int, Lam_int, Psi_int, EvList, maxIter, epsLogLik, verbose, homo, Psi_diag));
    return rcpp_result_gen;
END_RCPP
}
// profast_p_cpp
Rcpp::List profast_p_cpp(const Rcpp::List& Xlist, const Rcpp::List& AList, const Rcpp::List& Adjlist, const arma::mat& nv_int, const arma::mat& W_int, const arma::mat& Lam_int, const arma::cube& Psi_int, const Rcpp::List& EvList, const int& maxIter, const double& epsELBO, const bool& verbose, const bool& homo, const bool& Psi_diag);
RcppExport SEXP _ProFAST_profast_p_cpp(SEXP XlistSEXP, SEXP AListSEXP, SEXP AdjlistSEXP, SEXP nv_intSEXP, SEXP W_intSEXP, SEXP Lam_intSEXP, SEXP Psi_intSEXP, SEXP EvListSEXP, SEXP maxIterSEXP, SEXP epsELBOSEXP, SEXP verboseSEXP, SEXP homoSEXP, SEXP Psi_diagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Xlist(XlistSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type AList(AListSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Adjlist(AdjlistSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type nv_int(nv_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type W_int(W_intSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Lam_int(Lam_intSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type Psi_int(Psi_intSEXP);
    Rcpp::traits::input_parameter< const Rcpp::List& >::type EvList(EvListSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxIter(maxIterSEXP);
    Rcpp::traits::input_parameter< const double& >::type epsELBO(epsELBOSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const bool& >::type homo(homoSEXP);
    Rcpp::traits::input_parameter< const bool& >::type Psi_diag(Psi_diagSEXP);
    rcpp_result_gen = Rcpp::wrap(profast_p_cpp(Xlist, AList, Adjlist, nv_int, W_int, Lam_int, Psi_int, EvList, maxIter, epsELBO, verbose, homo, Psi_diag));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ProFAST_iSCMEBCpp", (DL_FUNC) &_ProFAST_iSCMEBCpp, 19},
    {"_ProFAST_getneighborhood_fast", (DL_FUNC) &_ProFAST_getneighborhood_fast, 2},
    {"_ProFAST_wpcaCpp", (DL_FUNC) &_ProFAST_wpcaCpp, 3},
    {"_ProFAST_correct_one_gene", (DL_FUNC) &_ProFAST_correct_one_gene, 13},
    {"_ProFAST_correct_genes", (DL_FUNC) &_ProFAST_correct_genes, 13},
    {"_ProFAST_pdistance_cpp", (DL_FUNC) &_ProFAST_pdistance_cpp, 3},
    {"_ProFAST_gene_embed_cpp", (DL_FUNC) &_ProFAST_gene_embed_cpp, 2},
    {"_ProFAST_profast_g_cpp", (DL_FUNC) &_ProFAST_profast_g_cpp, 12},
    {"_ProFAST_profast_p_cpp", (DL_FUNC) &_ProFAST_profast_p_cpp, 13},
    {NULL, NULL, 0}
};

RcppExport void R_init_ProFAST(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
