#include <iostream> 
#include <limits>

using namespace std;

bool read_choice( int & N )
{
    cout << "Entrez un chiffre entre 1 et 6 : " ; 
    while ( ! ( cin >> N ) || N < 1 || N > 6 )
    { 
        if ( cin.eof() )
        { 
            // ^D  (^Z sous windows); Fin du flux d'entree!
            return false; 
        }
        else if ( cin.fail() )
        { 
            cout << "Saisie incorrecte, recommencez : "; 
            cin.clear(); 
            cin.ignore( numeric_limits<streamsize>::max(), '\n' );
        }
        else
        {
            cout << "Le chiffre n'est pas entre 1 et 6, recommencez : ";
        }
    }
    return true; // succès
}

int main () 
{ 
    int choix;
    if ( read_choice( choix ) )
    {
        cout << "Vous avez choisi : " << choix << '\n';
    }

    return 0; 
}

/* output = 
Entrez un chiffre entre 1 et 6 : abcdef
Saisie incorrecte, recommencez : -3
Le chiffre n'est pas entre 1 et 6, recommencez : 17
Le chiffre n'est pas entre 1 et 6, recommencez : 5
Vous avez choisi : 5
*/

/*
cin
Standard input stream (object )
cout
Standard output stream (object )
cerr
Standard output stream for errors (object )
clog
Standard output stream for logging (object )
*/
