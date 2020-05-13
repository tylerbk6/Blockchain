#include "Blockchain.h"

Blockchain::Blockchain() {
    _vchain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty = 6;
}

void Blockchain::addBlock(Block bNew){
bNew.sPrevHash = _GetLastBlock().GetHash();
bNew.MineBlock(_nDifficulty);
_vchain.push_back(bNew);
}

Block Blockchain::_GetLastBlock() const{
    return _vchain.back();
}