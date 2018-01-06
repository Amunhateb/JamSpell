#pragma once

#include <ostream>

namespace NJamSpell {

class TPerfectHash {
public:
    TPerfectHash();
    TPerfectHash(const TPerfectHash& other) = delete;
    ~TPerfectHash();
    void Dump(std::ostream& out) const;
    void Load(std::istream& in);
    void Init(const std::vector<std::string>& keys);
    uint32_t Hash(const std::string& value) const;
    uint32_t BucketsNumber() const;
private:
    void* Phf; // sort of forward declaration
};

} // NJamSpell