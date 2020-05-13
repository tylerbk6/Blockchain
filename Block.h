#include <cstdint>
#include <iostream>
#include <sstream>

using namespace std;

class Block{
public:
    string sPrevHash;    // Block is linked to previous block
    
    // Constructor, data is passed by referenced so it cannot be changed
    Block(uint32_t nIndexIn, const string &sDataIn);
    string GetHash();
    void MineBlock(uint32_t nDifficulty);

private:
    uint32_t nIndex;
    int64_t nNonce;
    string _sData;
    string _sHash;
    time_t _tTime;

    string _CalculateHash() const;
};

