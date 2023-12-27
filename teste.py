class Pessoa:
    def __init__(self, nome, idade, cpf, matricula):
        self.nome = nome
        self.idade = idade
        self.cpf = cpf
        self.matricula = matricula
        
    
    
    def cadastrarAluno(self):
        name = input("Digite o nome do aluno: ")
        age = input("Digite a idade do aluno: ")
        cpf = input("Digite o cpf do aluno: ")
        matricula = input("Digite a matricula do aluno: ")
        aluno = Pessoa(name, age, cpf, matricula)
        
        print("Aluno cadastrado com sucesso!")
        return aluno




if __name__ == "__main__":
    aluno = Pessoa()
    aluno.cadastrarAluno()
    
    
        
