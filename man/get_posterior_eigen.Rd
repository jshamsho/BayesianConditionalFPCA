% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/Posterior_bands.R
\name{get_posterior_eigen}
\alias{get_posterior_eigen}
\title{Posterior inference for covariate-adjusted covariance function}
\usage{
get_posterior_eigen(
  mcmc_results,
  eigenvals,
  zi,
  alpha_level = 0.05,
  mode = "point-wise"
)
}
\arguments{
\item{mcmc_results}{mcmc object}

\item{eigenvals}{Number of eigenvalues to keep}

\item{zi}{Covariate vector of interest}

\item{alpha_level}{Type I error rate}

\item{mode}{Type of posterior bands. Default is point-wise. Can specify
simultaneous for approximate simultaneous coverage}
}
\value{
An R list containing the following elements 

\code{lower} A matrix containing the lower bound of the simultaneous 
credible band of eigenfunctions  

\code{mean} A matrix containing the posterior mean of eigenfunctions  

\code{upper} A matrix containing the upper bound of the simultaneous 
credible band of eigenfunctions  

\code{eigenval_intervals} A matrix containing a 1-alpha credible interval
for eigenvalues  

\code{eigenval_pve_intervals} A matrix containing a 1-alpha credible 
interval for relative eigenvalues  

\code{surface} Posterior covariance surface  

\code{magnitude} Total variance of the fitted covariance surface across, one
for each sample

\code{raw_magnitude} 1-alpha credible interval for total variance
}
\description{
Posterior inference for covariate-adjusted covariance function
}
\details{
Generates posterior inference for covariate adjusted
 eigenfunctions, surfaces, and magnitudes
}
