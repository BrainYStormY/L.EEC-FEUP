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

Animal::Animal(string spec, bool sex, string nom, int idad):especie(spec), sexo(sex), nome(nom)
{
	setIdade(idad);
	Veterinario vet;
	setVeterinario(vet);
}

Animal::Animal(string spec, bool sex, string nom, int idad, Veterinario vet):especie(spec), sexo(sex), nome(nom)
{
	setIdade(idad);
	setVeterinario(vet);
}

string Animal::getEspecie() const
{
	return especie;
}

bool Animal::getSexo() const
{
	return sexo;
}

string Animal::getNome() const
{
	return nome;
}

void Animal::setIdade(int idad)
{
	idade = idad;
}

int Animal::getIdade(void) const
{
	return idade;
}

void Animal::setVeterinario(Veterinario vet)
{
	veterinario = vet;
}

Veterinario Animal::getVeterinario() const
{
	return veterinario;
}

Animal::Animal(Animal &animal):especie(animal.especie), sexo(animal.sexo), nome(animal.nome)
{
	idade = animal.idade;
	veterinario = animal.veterinario;
}
