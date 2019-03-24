#include "processor.h"
#include <iostream>

Processor::Processor()
{
}

Processor::Processor(Processor::Proc p_proc, Processor::Val_P p_val, Manufacturer mnf)
    : m_proc{p_proc}
    , m_val{p_val}
{
    getProc(p_proc);
    getVal(p_val);
    std::cout << m_proc << " " << m_val  << " " <<std::endl;
}


#define TS(value) (#value)

std::ostream& operator <<(std::ostream& Pv_out, const Processor::Val_P Pv){
    switch(Pv){
    case Processor::Val_P::G_1K:
        Pv_out << TS(G_1K);
        break;
    case Processor::Val_P::G_2K:
        Pv_out << TS(G_2K);
        break;
    case Processor::Val_P::G_3K:
        Pv_out << TS(G_3K);
        break;
    case Processor::Val_P::G_4K:
        Pv_out << TS(G_4K);
        break;
    default:
        break;

    }
    return Pv_out;
}

std::ostream& operator <<(std::ostream& Pr_out, const Processor::Proc Pr){
    switch(Pr){
    case Processor::Proc::AMD:
        Pr_out << TS(AMD);
        break;
    case Processor::Proc::INTEL:
        Pr_out << TS(INTEL);
        break;
    case Processor::Proc::ANDROID:
        Pr_out << TS(ANDROID);
        break;
    default:
        break;
    }
    return Pr_out;
}
