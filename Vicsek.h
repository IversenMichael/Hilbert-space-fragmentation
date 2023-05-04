#include<vector>
#include<array>

class VicsekLattice{
    public:
        int generation;
        std::vector<std::array<int, 2>> lattice_points;
        VicsekLattice(int);
        void print();
};