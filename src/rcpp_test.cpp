#include <RcppSNAP.h>

// [[Rcpp::export]]
int DefaultConstructor() {
  PNEANet Graph;
  
  Graph = TNEANet::New();
  Graph->AddNode(1);
  Graph->AddNode(2);
  Graph->AddEdge(1, 2, 1);
  return Graph->GetNodes();
}