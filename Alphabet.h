//
// Created by Grigory on 02/10/2022.
//

#ifndef OTIK_ANALYZER_ALPHABET_H
#define OTIK_ANALYZER_ALPHABET_H

#include <map>
#include <utility>
#include <string>

enum Alphabet{
    BYTE,
    UTF8
};

const std::map<Alphabet, std::string> alphabetNamingMap =
        {{BYTE, "BYTE"},
         {UTF8, "UTF8"}};

#endif //OTIK_ANALYZER_ALPHABET_H
