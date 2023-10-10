const SHA256 = require('crypto-js/sha256');

class Block{
    constructor(index,timestamp,data,previousHash=''){
        this.index = index;
        this.timestamp = timestamp;
        this.data = data;
        this.previousHash = previousHash;
        this.hash  = ' ';

    }

    claculateHash(){
        return SHA256(this.index + this.previousHash + this.timestamp + JSON.stringify(this.data)).toString();
    }
}

class Bloackchain{
    constructor(){
        this.chain = [this.creatGenesisBlock()];
    }

    creatGenesisBlock(){
        return new Block(0, "01/01/2017", "Genesis block", "0");
    }

    getLatestBlock(){
        return this.chain(this.chain.length-1);
    }

    addBlock(newBlock){
        newBlock.previousHash = this.getLatestBlock().hash;
        newBlock.hash = newBlock.claculateHash();
        this.chain.push(newBlock);
    }
}

let coin = new Bloackchain();
coin.addBlock(new Block(1,"10/07/2017",{amount: 4}));
coin.addBlock(new Block(2, "12/07/2017",{amount: 10}));

console.log(JSON.stringify(coin, null, 4));
