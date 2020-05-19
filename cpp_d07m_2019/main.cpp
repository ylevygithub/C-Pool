
#include "Federation.hpp"
#include "WarpSystem.hpp"
#include "Borg.hpp"

/*-----------ex00----------------
int main ()
{
    Federation::Starfleet::Ship UssKreog (289 , 132 , "Kreog", 6);
    Federation::Ship Independent (150 , 230 , "Greok");
    WarpSystem::QuantumReactor QR;
    WarpSystem::QuantumReactor QR2;
    WarpSystem::Core core(&QR);
    WarpSystem::Core core2(&QR2);
    UssKreog.setupCore(&core);
    UssKreog.checkCore();
    Independent.setupCore(&core2);
    Independent.checkCore();
    QR.setStability(false);
    QR2.setStability(false);
    UssKreog.checkCore();
    Independent.checkCore();
    std::cout << "\n\n\n\nThe ship USS Kreog has been finished.\n";
    std::cout << "It is 289 m in length and 132 m in width.\n";
    std::cout << "It can go to Warp 6!\n";
    std::cout << "The independent ship Greok just finished its construction.\n";
    std::cout << "It is 150 m in length and 230 m in width.\n";
    std::cout << "USS Kreog: The core is set.\n";
    std::cout << "USS Kreog: The core is stable at the time.\n";
    std::cout << "Greok: The core is set.\n";
    std::cout << "Greok: The core is stable at the time.\n";
    std::cout << "USS Kreog: The core is unstable at the time.\n";
    std::cout << "Greok: The core is unstable at the time.\n";
    return 0;
}
*/
/*---------------ex01-------------*/
int main ()
{
    Federation :: Starfleet :: Ship UssKreog (289 , 132 , "Kreog", 6) ;
    Federation :: Starfleet :: Captain James ("James T. Kirk") ;
    Federation :: Starfleet :: Ensign Chekov ("Pavel Andreievich Chekov") ;
    WarpSystem :: QuantumReactor QR ;
    WarpSystem :: QuantumReactor QR2 ;
    WarpSystem :: Core core (& QR ) ;
    WarpSystem :: Core core2 (& QR2 ) ;
    UssKreog . setupCore (& core ) ;
    UssKreog . checkCore () ;
    UssKreog . promote (& James ) ;
    Borg :: Ship Cube ;
    Cube . setupCore (& core2 ) ;
    Cube . checkCore () ;
    std::cout << "\n\n\nThe ship USS Kreog has been finished.$\n";
    std::cout << "It is 289 m in length and 132 m in width.$\n";
    std::cout << "It can go to Warp 6!$\n";
    std::cout << "Ensign Pavel Chekov, awaiting orders.$\n";
    std::cout << "USS Kreog: The core is set.$\n";
    std::cout << "USS Kreog: The core is stable at the time.$\n";
    std::cout << "James T. Kirk: I’m glad to be the captain of the USS Kreog.$\n";
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.$\n";
    std::cout << "Your biological characteristics and technologies will be assimilated.$\n";
    std::cout << "Resistance is futile.$\n";
    std::cout << "Everything is in order.$\n" << std::endl;
    return 0;
}