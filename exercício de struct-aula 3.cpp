#include <iostream>
using namespace std;
// criando struct para armazenar dados de um aluno
struct Aluno
{
    int id;
    string nome;
    int idade;
    float nota1;
    float nota2;
    float nota3;
    float media;
};

int main()
{
    bool condition = true;
    array<Aluno> alunos; // array para armazenar alunos
do
{
    int n;
switch (n)
{
case 1:
// código para cadastrar um aluno
    Aluno aluno;
    cout << "Digite o ID do aluno: ";
    cin >> aluno.id;
    cout << "Digite o nome do aluno: ";
    cin >> aluno.nome;
     cout << "Digite a idade do aluno: ";
    cin >> aluno.idade;
    cout << "Digite a nota 1 do aluno: ";
    cin >> aluno.nota1;
    cout << "Digite a nota 2 do aluno: ";
    cin >> aluno.nota2;
    cout << "Digite a nota 3 do aluno: ";
    cin >> aluno.nota3;
    break;
case 2:
default:
    break;
}   
} while (condition);

    return 0;
}