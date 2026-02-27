class pessoa {
    constructor(nome,anoNascimento){
    this.nome = nome;
    this.anoNascimento = anoNascimento;
    }


get idade(){
    const anoAtual = new Date().getFullYear;
    return anoAtual - this.anoNascimento;
    }
}
class paciente extends pessoa{
    cosntructor(nome, anoNascimento,tipoSanguineo){
        super(nome, anoNascimento)
        this.tipoSanguineo = tipoSanguineo;
    }


get info(){
    return (`${this.nome}, ${this.idade} anos, Tipo: ${this.tipoSanguineo}` );
    }

}
class medico extends pessoa{
    constructor(nome, anoNascimento,especialidade){
        super(nome,anoNascimento)
        this.especialidade = especialidade;
    }


get perfil(){
    return ('${this.nome}, Especialidade: ${this.especiaçidade}');
    }
}

