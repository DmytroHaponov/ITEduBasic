#include "skeleton.h"
#include "car.h"

#define TS(value) (#value)

std::ostream& operator <<(std::ostream& skt_out, const Skeleton::sk_type skt)
{
    switch(skt)
    {
    case Skeleton::sk_type::sedan:
        skt_out << TS(T_D1);
        break;
    case Skeleton::sk_type::speeder:
        skt_out << TS(T_D2);
        break;
    case Skeleton::sk_type::corvette:
       skt_out << TS(T_D3);
        break;
    case Skeleton::sk_type::hatchback:
        skt_out << TS(T_L1);
        break;
    case Skeleton::sk_type::double_door:
        skt_out << TS(T_L2);
        break;
    case Skeleton::sk_type::single_door:
        skt_out << TS(T_L3);
        break;
    case Skeleton::sk_type::triple_door:
        skt_out << TS(T_S1);
        break;
    default:
        skt_out << "unknown";
        break;
    }
    return skt_out;
}
std::ostream& operator <<(std::ostream& skm_out, const Skeleton::sk_material skm)
{
    switch(skm)
    {
    case Skeleton::sk_material::gold:
        skm_out << TS(T_S2);
        break;
    case Skeleton::sk_material::ferum:
        skm_out << TS(T_S3);
        break;
    case Skeleton::sk_material::steel:
        skm_out << TS(T_V1);
        break;
    case Skeleton::sk_material::silver:
        skm_out << TS(T_V2);
        break;
    case Skeleton::sk_material::plumbum:
        skm_out << TS(T_V3);
        break;
    case Skeleton::sk_material::mithrill:
        skm_out << TS(T_Z1);
        break;
    case Skeleton::sk_material::platinum:
        skm_out << TS(T_Z2);
        break;
    case Skeleton::sk_material::titanium:
        skm_out << TS(T_Z3);
        break;
    case Skeleton::sk_material::aluminium:
        skm_out << TS(aluminium);
        break;
    default:
        skm_out << "unknown";
        break;

    }
    return skm_out;
}

Skeleton::Skeleton()
{
    std::cout << "Default:" << std::endl;
    std::cout << " " << sk_name << " " << sk_stype <<
                 " " << sk_size_l << " " << sk_size_w <<
                 " " << sk_size_h << " " << sk_smaterial <<
                 " " << sk_weight << " " << sk_price <<
                 " " << sk_index << " " << std::endl;
}

Skeleton::Skeleton(std::string skm_name, sk_type skm_stype,
                   int skm_size_l, int skm_size_w,
                   int skm_size_h, sk_material skm_smaterial,
                   int skm_weight, int skm_price, int skm_index)
    : sk_name{skm_name}
    , sk_stype{skm_stype}
    , sk_size_l{skm_size_l}
    , sk_size_w{skm_size_w}
    , sk_size_h{skm_size_h}
    , sk_smaterial{skm_smaterial}
    , sk_weight{skm_weight}
    , sk_price{skm_price}
    , sk_index{skm_index}{
    std::cout << "Parameters are:" << std::endl;
    std::cout << " " << sk_name << " " << &sk_stype <<
                 " " << sk_size_l << " " << sk_size_w <<
                 " " << sk_size_h << " " << &sk_smaterial <<
                 " " << sk_weight << " " << sk_price <<
                 " " << sk_index << " " << std::endl;
}
