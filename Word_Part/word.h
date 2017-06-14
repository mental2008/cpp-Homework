#ifndef WORD_H
#define WORD_H

#include "note.h"
#include "windows.h"
#include <string>

class Word : public Note
{
public:
    Word(int, int, int, int, int, int, bool, bool, bool, bool, std::string,
         std::string, std::string, std::string, std::string);
    Word(SYSTEMTIME, bool, bool, bool, bool, std::string,
         std::string, std::string, std::string, std::string);
    ~Word();
    void setHasNounMeaning(bool);
    void setHasVerbMeaning(bool);
    void setHasAdjMeaning(bool);
    void setHasAdvMeaning(bool);
    void setNounMeaning(std::string);
    void setVerbMeaning(std::string);
    void setAdjMeaning(std::string);
    void setAdvMeaning(std::string);
    void setWordName(std::string);

    bool getHasNounMeaning() const;
    bool getHasVerbMeaning() const;
    bool getHasAdjMeaning() const;
    bool getHasAdvMeaning() const;
    std::string getNounMeaning() const;
    std::string getVerbMeaning() const;
    std::string getAdjMeaning() const;
    std::string getAdvMeaning() const;
    std::string getWordName() const;

    virtual void JUSTCLAIMPUREVIRTUAL();

private:
    bool hasNounMeaning;
    bool hasVerbMeaning;
    bool hasAdjMeaning;
    bool hasAdvMeaning;
    std::string nounMeaning;
    std::string verbMeaning;
    std::string adjMeaning;
    std::string advMeaning;
    std::string wordName;
};

#endif // WORD_H
