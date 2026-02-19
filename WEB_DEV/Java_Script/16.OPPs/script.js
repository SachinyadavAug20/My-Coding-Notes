function objrct(){

    let onj={
        a:1,
        b:"harry"
}
console.log(onj);
console.log(onj.a);
console.log(onj.b);
console.log(onj.constructor);
}

function prototype(){

    let animal={
        eats:true,
        walks:"walking"
    };
    
    let rabbit={
        jumps:true,
    };
    //we know rabbit is a animal thus need to have the properties of animals in the rabbite
    rabbit.__proto__=animal;//set rabbit[[prototype]]=animal
    console.log(rabbit);
    console.log(rabbit.eats);
    console.log(rabbit.walks);
}
//can't go to far with prototype need OPPs ===> class

class animal {
    constructor(name) {
        console.log(`object of animal class is created.....\nwhose name is ${name}`);
        this.name=name;
    }
    eats(){
        console.log(`kaha raha ho`);
    }
    jumps(){
        console.log(`kuodh raha ho`);
    }
    play(){
        console.log(`khal raha ho`);
    }

}

class lions extends animal{//by this it say lion is extension of animal, lion already has properties of animal and some own properties
    constructor(name) {
        super(name);//use super to call the constructor of parent class
        console.log(`object of animal class is created.....\nwhose name is ${name}`);
    }
    eats(){//overwrite te parents trait
        super.eats();//calls the eats function of the super(parent) class
        console.log(`kaha raha ho lion`);

    }

}

let bunny=new animal("bunny");
console.log(bunny);
console.log(bunny.name);
console.log(bunny.jumps());

let shera=new lions("shera");
console.log(shera.name)
console.log(shera.play())

console.log(bunny instanceof lions);
console.log(shera instanceof animal);
