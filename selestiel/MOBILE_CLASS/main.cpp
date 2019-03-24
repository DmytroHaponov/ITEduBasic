#include <iostream>
#include "mob.h"

int main()
{   Mob phone;
    Mob* ipod = new Mob(Mob::Mob_C::gold,
                Mob::Mob_T::A3,
            25000,
            Screen(Screen::Scr::S9,
                   Ram(Ram::M_Ram::gb6,
                       System(System::Sys::Apple,
                              Processor(Processor::Proc::ANDROID,
                                        Processor::Val_P::G_3K,
                                        Manufacturer(Manufacturer::man::Apple,
                                                     Country(Country::DevCo::CHINA)
                                                     ))))), 500);
    phone.getCountry(Country::DevCo::USA);
    phone.getManuf(Manufacturer::man::Nokia);
    phone.getProc(Processor::Proc::INTEL);
    phone.getVal(Processor::Val_P::G_4K);
    phone.getSys(System::Sys::Windows);
    phone.getRam(Ram::M_Ram::gb32);
    phone.getScr(Screen::Scr::S21);
    phone.getType(Mob::Mob_T::A5);
    phone.getColor(Mob::Mob_C::silver);
    phone.getWeight(300);
    phone.getPrice(15000);

   Mob(Mob::Mob_C::red,Mob::Mob_T::A1,50000,
        Screen(Screen::Scr::S5,
               Ram(Ram::M_Ram::gb2,
                   System(System::Sys::IOS,
                          Processor(Processor::Proc::AMD,Processor::Val_P::G_1K,
                                    Manufacturer(Manufacturer::man::LG,
                                                 Country(Country::DevCo::USA)))))),500);
phone.sumOfMOB(phone, *ipod);

return 0;
}
