#include<vector>
#include "Vicsek.h"
#include<iostream>

VicsekLattice::VicsekLattice(int generation){
    this->generation = generation;
    lattice_points = std::vector<std::array<int, 2>>(
            {
            std::array<int, 2>({0, 0}),
            std::array<int, 2>({-1, 0}),
            std::array<int, 2>({1, 0}),
            std::array<int, 2>({0, -1}),
            std::array<int, 2>({0, 1}),
            });
};

void VicsekLattice::print(){
    std::cout << "Vicsek Lattice (gen = " << generation << ")" << std::endl;
    for(int index=0; index<lattice_points.size(); index++){
        std::cout << "(" << lattice_points[index][0] << ", " <<lattice_points[index][1] << ")" << std::endl;
    };
};