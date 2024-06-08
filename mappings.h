// mappings.h
#ifndef MAPPINGS_H
#define MAPPINGS_H

#include <string>
#include <map>

class Mappings {
public:
    Mappings();
    ~Mappings();

    void loadMappings(const std::string& version);

private:
    std::map<std::string, std::string> mappings;
};

#endif // MAPPINGS_H
