#include "animal.h"
#include <cstring>

Veterinario::Veterinario(string nom, string spec)
{
	nome = nom;
	especialidade = spec;
}

Veterinario::Veterinario()
{
	nome = "";
	especialidade = "";
}

string Veterinario::getNome() const
{
	return nome;
}

void Veterinario::setNome(string nom)
{
	nome = nom;
}

string Veterinario::getEspecialidade() const
{
	return especialidade;
}

void Veterinario::setEspecialidade(string spec)
{
	especialidade = spec;
}

Animal::Animal(string spec, bool sex, string nom, int idad)
{
	especie = spec;
	sexo = sex;
	nome = nom;
	idade = idad;

}