#pragma once
#include "engine.h"
#include "design.h"
#include <iostream>

class Skeleton : public Engine, public Design
{
public:
    enum sk_material : int
    {
        ferum,
        steel,
        aluminium,
        plumbum,
        titanium,
        silver,
        gold,
        platinum,
        mithrill,
    };
    enum class sk_type : int
    {
        single_door,
        double_door,
        triple_door,
        sedan,
        hatchback,
        corvette,
        speeder
    };
private:
    std::string sk_name{"name"};
    sk_type sk_stype{sk_type::sedan};
    int sk_size_l{0};
    int sk_size_w{0};
    int sk_size_h{0};
    sk_material sk_smaterial{sk_material::ferum};
    int sk_weight{0};
    int sk_price{0};
public:
    int sk_index{0};
    Skeleton();
    Skeleton(std::string skm_name, sk_type skm_stype,
             int skm_size_l, int skm_size_w,
             int skm_size_h, sk_material skm_smaterial,
             int skm_weight, int skm_price, int skm_index);
};

//how to make right :
//  car.skeleton.material(sedan)
std::ostream& operator <<(std::ostream& skt_out, const Skeleton::sk_type skt);
std::ostream& operator <<(std::ostream& skm_out, const Skeleton::sk_material skm);
