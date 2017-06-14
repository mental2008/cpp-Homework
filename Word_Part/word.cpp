#include "word.h"
#include "windows.h"

Word::Word(int year, int month, int day, int hour, int minute, int second,
           bool hasNounMeaning,  bool hasVerbMeaning, bool hasAdjMeaning,
           bool hasAdvMeaning, std::string nounMeaning, std::string verbMeaning,
           std::string adjMeaning, std::string advMeaning, std::string wordName)
    :Note(year, month, day, hour, minute, second)
{
    setHasNounMeaning(hasNounMeaning);
    setHasVerbMeaning(hasVerbMeaning);
    setHasAdjMeaning(hasAdjMeaning);
    setHasAdvMeaning(hasAdvMeaning);
    setNounMeaning(nounMeaning);
    setVerbMeaning(verbMeaning);
    setAdjMeaning(adjMeaning);
    setAdvMeaning(advMeaning);
    setWordName(wordName);
}

Word::Word(SYSTEMTIME ct,
           bool hasNounMeaning,  bool hasVerbMeaning, bool hasAdjMeaning,
           bool hasAdvMeaning, std::string nounMeaning, std::string verbMeaning,
           std::string adjMeaning, std::string advMeaning, std::string wordName)
    :Note(ct)
{
    setHasNounMeaning(hasNounMeaning);
    setHasVerbMeaning(hasVerbMeaning);
    setHasAdjMeaning(hasAdjMeaning);
    setHasAdvMeaning(hasAdvMeaning);
    setNounMeaning(nounMeaning);
    setVerbMeaning(verbMeaning);
    setAdjMeaning(adjMeaning);
    setAdvMeaning(advMeaning);
    setWordName(wordName);
}

Word::~Word()
{
    ;
}

void Word::setHasNounMeaning(bool hasNounMeaning)
{
    this->hasNounMeaning = hasNounMeaning;
}

void Word::setHasVerbMeaning(bool hasVerbMeaning)
{
    this->hasVerbMeaning = hasVerbMeaning;
}

void Word::setHasAdjMeaning(bool hasAdjMeaning)
{
    this->hasAdjMeaning = hasAdjMeaning;
}

void Word::setHasAdvMeaning(bool hasAdvMeaning)
{
    this->hasAdvMeaning = hasAdvMeaning;
}

void Word::setNounMeaning(std::string nounMeaning)
{
    this->nounMeaning = nounMeaning;
}

void Word::setVerbMeaning(std::string verbMeaning)
{
    this->verbMeaning = verbMeaning;
}

void Word::setAdjMeaning(std::string adjMeaning)
{
    this->adjMeaning = adjMeaning;
}

void Word::setAdvMeaning(std::string advMeaning)
{
    this->advMeaning = advMeaning;
}

void Word::setWordName(std::string wordName)
{
    this->wordName = wordName;
}

bool Word::getHasNounMeaning() const
{
    return hasNounMeaning;
}

bool Word::getHasVerbMeaning() const
{
    return hasVerbMeaning;
}

bool Word::getHasAdjMeaning() const
{
    return hasAdjMeaning;
}

bool Word::getHasAdvMeaning() const
{
    return hasAdvMeaning;
}

std::string Word::getNounMeaning() const
{
    return nounMeaning;
}

std::string Word::getVerbMeaning() const
{
    return verbMeaning;
}

std::string Word::getAdjMeaning() const
{
    return adjMeaning;
}

std::string Word::getAdvMeaning() const
{
    return advMeaning;
}

std::string Word::getWordName() const
{
    return wordName;
}

void Word::JUSTCLAIMPUREVIRTUAL()
{
    ;
}

