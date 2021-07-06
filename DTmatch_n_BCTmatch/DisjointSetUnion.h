#ifndef MATCH_DISJOINTSETUNION_H
#define MATCH_DISJOINTSETUNION_H

#include <numeric>
#include <utility>

struct DisjointSetUnion {
    std::vector<int> fa;

    explicit DisjointSetUnion(int sz) {
        fa.resize(sz);
        std::iota(fa.begin(), fa.end(), 0);
    }

    int find(int x) {
        return x == fa[x] ? x : fa[x] = find(fa[x]);
    }

//    int find(int x) {
//        int t1 = x, t2;
//        while (x != fa[x]) x = fa[x];
//        while (t1 != fa[t1]) {
//            t2 = fa[t1];
//            fa[t1] = x;
//            t1 = t2;
//        }
//        return x;
//    }
};
#endif //RDS_DISJOINTSETUNION_H
