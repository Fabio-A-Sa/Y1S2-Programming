// Created on May, 2021
// @author: Fábio Araújo de Sá

class SpreadsheetCell// an "abstract class" {public:SpreadsheetCell() { };virtual~SpreadsheetCell() { };virtualvoidset(conststd::string& inString) = 0;virtualstd::stringgetString() const= 0;};