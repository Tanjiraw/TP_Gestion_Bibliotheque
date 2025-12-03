#include "Livre.h"
#include "date.h"
#include <iostream>
#include <string>

int main() {
    // Création de quelques dates
    Date date1(4, 5, 2021);
    Date date2(29, 2, 2020);

    // Création de livres
    Livre livre1("The Hitchhiker's Guide to the Galaxy", "Douglas Adams", "Anglais", date1, "0593359445");
    Livre livre2("Foundation", "Isaac Asimov", "Anglais", date2, "9780553293357");

    // Test des getters de Livre
    std::cout << "---- Tests Livre 1 ----" << std::endl;
    std::cout << "Titre attendu : The Hitchhiker's Guide to the Galaxy, obtenu : " << livre1.getTitle() << std::endl;
    std::cout << "Auteur attendu : Douglas Adams, obtenu : " << livre1.getAuthor() << std::endl;
    std::cout << "Langue attendue : Anglais, obtenu : " << livre1.getLanguage() << std::endl;
    std::cout << "Date attendue : " << date1.printDate() << ", obtenue : " << livre1.getDate().printDate() << std::endl;
    std::cout << "ISBN attendu : 0593359445, obtenu : " << livre1.getIsbn() << std::endl;

    std::cout << "\n---- Tests Livre 2 ----" << std::endl;
    std::cout << "Titre attendu : Foundation, obtenu : " << livre2.getTitle() << std::endl;
    std::cout << "Auteur attendu : Isaac Asimov, obtenu : " << livre2.getAuthor() << std::endl;
    std::cout << "Langue attendue : Anglais, obtenu : " << livre2.getLanguage() << std::endl;
    std::cout << "Date attendue : " << date2.printDate() << ", obtenue : " << livre2.getDate().printDate() << std::endl;
    std::cout << "ISBN attendu : 9780553293357, obtenu : " << livre2.getIsbn() << std::endl;

    return 0;
}
