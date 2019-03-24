#pragma once
#include <iostream>
#include "manufacturer.h"

class Processor : public Manufacturer
{
public:
    enum class Proc : char{
      AMD, INTEL, ANDROID
    };
    enum class Val_P : int{
        G_1K, G_2K, G_3K, G_4K
    };
private:
    Manufacturer mnf;
    Proc m_proc{Proc::AMD};
    Val_P m_val{Val_P::G_1K};
public:
    Processor();
    Processor(Proc p_proc, Val_P p_val, Manufacturer mnf);
    Proc getProc(const Proc& f_proc){
        m_proc = f_proc;
        return m_proc;
    }
    Val_P getVal(const Val_P& f_val){
        m_val = f_val;
        return m_val;
    }

};

std::ostream& operator <<(std::ostream& Pr_out, const Processor::Proc Pr);
std::ostream& operator <<(std::ostream& Pv_out, const Processor::Val_P Pv);
