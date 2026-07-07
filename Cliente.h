#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

	class Cliente {
	private:
		std::string Identification, Name, Telefono;
	public:
		Cliente(std::string auxIdentification, std::string auxName, std::string auxTelefono);
		std::string getIdentification();
		std::string getName();
		std::string getTelefono();
        void setIdentification(std::string codigo);
        void setName(std::string auxName);
		void setTelefono(std::string auxTelefono);

	};

#endif // CLIENTE_H