#ifndef BCCLEAN_LOOP_COLORIZE_H
#define BCCLEAN_LOOP_COLORIZE_H
#include <Eigen/Core>
#include <vector>
#include <igl/vertex_triangle_adjacency.h> 
#include <queue>
#include <igl/triangle_triangle_adjacency.h>
#include "TraceComplex.h"
namespace bcclean
{
    double loop_colorize(
    const Eigen::MatrixXd& V, 
    const Eigen::MatrixXi & F, 
    const std::vector<std::vector<int> > & TEdges,
    const int face_seed,
    const int lb,
    Eigen::VectorXi & FL);

}
#endif //BCCLEAN_LOOP_COLORIZE_H