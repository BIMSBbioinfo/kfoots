// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// forward_backward
List forward_backward(NumericMatrix initP, NumericMatrix trans, NumericMatrix lliks, IntegerVector seqlens, NumericMatrix posteriors, int nthreads = 1);
RcppExport SEXP kfoots_forward_backward(SEXP initPSEXP, SEXP transSEXP, SEXP lliksSEXP, SEXP seqlensSEXP, SEXP posteriorsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type initP(initPSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type trans(transSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type lliks(lliksSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type seqlens(seqlensSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type posteriors(posteriorsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        List __result = forward_backward(initP, trans, lliks, seqlens, posteriors, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// viterbi
List viterbi(NumericMatrix initP, NumericMatrix trans, NumericMatrix lliks, NumericVector seqlens);
RcppExport SEXP kfoots_viterbi(SEXP initPSEXP, SEXP transSEXP, SEXP lliksSEXP, SEXP seqlensSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type initP(initPSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type trans(transSEXP );
        Rcpp::traits::input_parameter< NumericMatrix >::type lliks(lliksSEXP );
        Rcpp::traits::input_parameter< NumericVector >::type seqlens(seqlensSEXP );
        List __result = viterbi(initP, trans, lliks, seqlens);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tabFast
Rcpp::IntegerVector tabFast(Rcpp::IntegerVector counts);
RcppExport SEXP kfoots_tabFast(SEXP countsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type counts(countsSEXP );
        Rcpp::IntegerVector __result = tabFast(counts);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tabCols
Rcpp::List tabCols(Rcpp::IntegerMatrix counts, int nthreads = 1);
RcppExport SEXP kfoots_tabCols(SEXP countsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::List __result = tabCols(counts, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// tabRows
Rcpp::List tabRows(Rcpp::IntegerMatrix counts, int nthreads = 1);
RcppExport SEXP kfoots_tabRows(SEXP countsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::List __result = tabRows(counts, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// labelCounts
Rcpp::IntegerVector labelCounts(Rcpp::NumericVector empirical, Rcpp::NumericVector theoretical);
RcppExport SEXP kfoots_labelCounts(SEXP empiricalSEXP, SEXP theoreticalSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type empirical(empiricalSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type theoretical(theoreticalSEXP );
        Rcpp::IntegerVector __result = labelCounts(empirical, theoretical);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// clusterAverages2
Rcpp::List clusterAverages2(Rcpp::IntegerMatrix counts, Rcpp::IntegerMatrix coords, Rcpp::List clusters, int nthreads = 1);
RcppExport SEXP kfoots_clusterAverages2(SEXP countsSEXP, SEXP coordsSEXP, SEXP clustersSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type coords(coordsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type clusters(clustersSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::List __result = clusterAverages2(counts, coords, clusters, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// clusterAverages
Rcpp::List clusterAverages(Rcpp::IntegerMatrix counts, Rcpp::List clusters, int nthreads = 1);
RcppExport SEXP kfoots_clusterAverages(SEXP countsSEXP, SEXP clustersSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type clusters(clustersSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::List __result = clusterAverages(counts, clusters, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fillPosteriors
Rcpp::NumericMatrix fillPosteriors(Rcpp::IntegerMatrix coords, Rcpp::List clusters, int nclust, int nthreads = 1);
RcppExport SEXP kfoots_fillPosteriors(SEXP coordsSEXP, SEXP clustersSEXP, SEXP nclustSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type coords(coordsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type clusters(clustersSEXP );
        Rcpp::traits::input_parameter< int >::type nclust(nclustSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::NumericMatrix __result = fillPosteriors(coords, clusters, nclust, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rowdotprod
Rcpp::NumericMatrix rowdotprod(Rcpp::NumericMatrix counts, bool besselCorr = true, int nthreads = 1);
RcppExport SEXP kfoots_rowdotprod(SEXP countsSEXP, SEXP besselCorrSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< bool >::type besselCorr(besselCorrSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::NumericMatrix __result = rowdotprod(counts, besselCorr, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// matprod
void matprod(Rcpp::NumericMatrix mat1, Rcpp::NumericMatrix mat2, Rcpp::NumericMatrix mat3, int nthreads = 1);
RcppExport SEXP kfoots_matprod(SEXP mat1SEXP, SEXP mat2SEXP, SEXP mat3SEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mat1(mat1SEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mat2(mat2SEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mat3(mat3SEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        matprod(mat1, mat2, mat3, nthreads);
    }
    return R_NilValue;
END_RCPP
}
// discretizeRows
Rcpp::IntegerMatrix discretizeRows(Rcpp::NumericMatrix scores, int nlevels, int nthreads = 1);
RcppExport SEXP kfoots_discretizeRows(SEXP scoresSEXP, SEXP nlevelsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type scores(scoresSEXP );
        Rcpp::traits::input_parameter< int >::type nlevels(nlevelsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::IntegerMatrix __result = discretizeRows(scores, nlevels, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// splitAxes
Rcpp::IntegerMatrix splitAxes(Rcpp::NumericMatrix scores, int nsplit, int nthreads = 1);
RcppExport SEXP kfoots_splitAxes(SEXP scoresSEXP, SEXP nsplitSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type scores(scoresSEXP );
        Rcpp::traits::input_parameter< int >::type nsplit(nsplitSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::IntegerMatrix __result = splitAxes(scores, nsplit, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// splitAxesInt
Rcpp::IntegerMatrix splitAxesInt(Rcpp::IntegerMatrix scores, int nsplit, int nthreads = 1);
RcppExport SEXP kfoots_splitAxesInt(SEXP scoresSEXP, SEXP nsplitSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type scores(scoresSEXP );
        Rcpp::traits::input_parameter< int >::type nsplit(nsplitSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::IntegerMatrix __result = splitAxesInt(scores, nsplit, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// KL_dist_mat
Rcpp::NumericMatrix KL_dist_mat(Rcpp::NumericMatrix nbs1, Rcpp::NumericMatrix nbs2, double r);
RcppExport SEXP kfoots_KL_dist_mat(SEXP nbs1SEXP, SEXP nbs2SEXP, SEXP rSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type nbs1(nbs1SEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type nbs2(nbs2SEXP );
        Rcpp::traits::input_parameter< double >::type r(rSEXP );
        Rcpp::NumericMatrix __result = KL_dist_mat(nbs1, nbs2, r);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// findUniqueSeeds
Rcpp::IntegerVector findUniqueSeeds(Rcpp::IntegerMatrix counts, Rcpp::IntegerVector permutation, int k);
RcppExport SEXP kfoots_findUniqueSeeds(SEXP countsSEXP, SEXP permutationSEXP, SEXP kSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type permutation(permutationSEXP );
        Rcpp::traits::input_parameter< int >::type k(kSEXP );
        Rcpp::IntegerVector __result = findUniqueSeeds(counts, permutation, k);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// llik2posteriors
Rcpp::List llik2posteriors(Rcpp::NumericMatrix lliks, Rcpp::NumericVector mix_coeff, Rcpp::NumericMatrix posteriors, int nthreads = 1);
RcppExport SEXP kfoots_llik2posteriors(SEXP lliksSEXP, SEXP mix_coeffSEXP, SEXP posteriorsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type lliks(lliksSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mix_coeff(mix_coeffSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type posteriors(posteriorsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::List __result = llik2posteriors(lliks, mix_coeff, posteriors, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// mapToUnique
Rcpp::List mapToUnique(Rcpp::IntegerVector values);
RcppExport SEXP kfoots_mapToUnique(SEXP valuesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type values(valuesSEXP );
        Rcpp::List __result = mapToUnique(values);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getMultinomConst
Rcpp::NumericVector getMultinomConst(Rcpp::IntegerMatrix counts, int nthreads = 1);
RcppExport SEXP kfoots_getMultinomConst(SEXP countsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::NumericVector __result = getMultinomConst(counts, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// getMultinomConstSW
Rcpp::NumericVector getMultinomConstSW(SEXP counts, int nthreads = 1);
RcppExport SEXP kfoots_getMultinomConstSW(SEXP countsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::NumericVector __result = getMultinomConstSW(counts, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sumAt
Rcpp::NumericVector sumAt(Rcpp::NumericVector values, Rcpp::IntegerVector map, int size, bool zeroIdx = false);
RcppExport SEXP kfoots_sumAt(SEXP valuesSEXP, SEXP mapSEXP, SEXP sizeSEXP, SEXP zeroIdxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type values(valuesSEXP );
        Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type map(mapSEXP );
        Rcpp::traits::input_parameter< int >::type size(sizeSEXP );
        Rcpp::traits::input_parameter< bool >::type zeroIdx(zeroIdxSEXP );
        Rcpp::NumericVector __result = sumAt(values, map, size, zeroIdx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// colSumsInt
Rcpp::IntegerVector colSumsInt(Rcpp::IntegerMatrix nums, int nthreads = 1);
RcppExport SEXP kfoots_colSumsInt(SEXP numsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type nums(numsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::IntegerVector __result = colSumsInt(nums, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// colSumsDouble
Rcpp::NumericVector colSumsDouble(Rcpp::NumericMatrix nums, int nthreads = 1);
RcppExport SEXP kfoots_colSumsDouble(SEXP numsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type nums(numsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::NumericVector __result = colSumsDouble(nums, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rowSumsDouble
Rcpp::NumericVector rowSumsDouble(Rcpp::NumericMatrix mat, int nthreads = 1);
RcppExport SEXP kfoots_rowSumsDouble(SEXP matSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mat(matSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::NumericVector __result = rowSumsDouble(mat, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// lLikMat
void lLikMat(Rcpp::IntegerMatrix counts, Rcpp::List models, Rcpp::List ucs, Rcpp::NumericVector mConst, Rcpp::NumericVector lliks, int nthreads = 1);
RcppExport SEXP kfoots_lLikMat(SEXP countsSEXP, SEXP modelsSEXP, SEXP ucsSEXP, SEXP mConstSEXP, SEXP lliksSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type models(modelsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type ucs(ucsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mConst(mConstSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type lliks(lliksSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        lLikMat(counts, models, ucs, mConst, lliks, nthreads);
    }
    return R_NilValue;
END_RCPP
}
// lLikGapMat
void lLikGapMat(SEXP counts, Rcpp::List models, Rcpp::List ucs, Rcpp::NumericVector mConst, Rcpp::NumericVector lliks, int nthreads = 1);
RcppExport SEXP kfoots_lLikGapMat(SEXP countsSEXP, SEXP modelsSEXP, SEXP ucsSEXP, SEXP mConstSEXP, SEXP lliksSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type models(modelsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type ucs(ucsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mConst(mConstSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type lliks(lliksSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        lLikGapMat(counts, models, ucs, mConst, lliks, nthreads);
    }
    return R_NilValue;
END_RCPP
}
// pwhichmax
Rcpp::IntegerVector pwhichmax(Rcpp::NumericMatrix posteriors, int nthreads = 1);
RcppExport SEXP kfoots_pwhichmax(SEXP posteriorsSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type posteriors(posteriorsSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::IntegerVector __result = pwhichmax(posteriors, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fitNB_inner
Rcpp::List fitNB_inner(Rcpp::IntegerVector counts, Rcpp::NumericVector posteriors, double initR = -1, double tol = 1e-8, int nthreads = 1);
RcppExport SEXP kfoots_fitNB_inner(SEXP countsSEXP, SEXP posteriorsSEXP, SEXP initRSEXP, SEXP tolSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type posteriors(posteriorsSEXP );
        Rcpp::traits::input_parameter< double >::type initR(initRSEXP );
        Rcpp::traits::input_parameter< double >::type tol(tolSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::List __result = fitNB_inner(counts, posteriors, initR, tol, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fitModels
Rcpp::List fitModels(Rcpp::IntegerMatrix counts, Rcpp::NumericVector posteriors, Rcpp::List models, Rcpp::List ucs, std::string type = "indep", double tol = 1e-8, int nthreads = 1);
RcppExport SEXP kfoots_fitModels(SEXP countsSEXP, SEXP posteriorsSEXP, SEXP modelsSEXP, SEXP ucsSEXP, SEXP typeSEXP, SEXP tolSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type posteriors(posteriorsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type models(modelsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type ucs(ucsSEXP );
        Rcpp::traits::input_parameter< std::string >::type type(typeSEXP );
        Rcpp::traits::input_parameter< double >::type tol(tolSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::List __result = fitModels(counts, posteriors, models, ucs, type, tol, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fitModelsGapMat
Rcpp::List fitModelsGapMat(SEXP counts, Rcpp::NumericVector posteriors, Rcpp::List models, Rcpp::List ucs, std::string type = "indep", double tol = 1e-8, int nthreads = 1);
RcppExport SEXP kfoots_fitModelsGapMat(SEXP countsSEXP, SEXP posteriorsSEXP, SEXP modelsSEXP, SEXP ucsSEXP, SEXP typeSEXP, SEXP tolSEXP, SEXP nthreadsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type counts(countsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type posteriors(posteriorsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type models(modelsSEXP );
        Rcpp::traits::input_parameter< Rcpp::List >::type ucs(ucsSEXP );
        Rcpp::traits::input_parameter< std::string >::type type(typeSEXP );
        Rcpp::traits::input_parameter< double >::type tol(tolSEXP );
        Rcpp::traits::input_parameter< int >::type nthreads(nthreadsSEXP );
        Rcpp::List __result = fitModelsGapMat(counts, posteriors, models, ucs, type, tol, nthreads);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
