#include <iostream>

struct StackElement {
	int value;
	StackElement* precedent;
};

struct Stack {
	private:
		StackElement* tete;
	
	public:
	void init() {
		this->tete = nullptr;
	}
	
	void getTete() {
		this->tete;
	}
	
	void add(int n) {
		StackElement* nouveau = new StackElement;
		nouveau->value = n;
		nouveau->precedent = this->tete;
		this->tete = nouveau;
	}
	
	void detruire() {
		StackElement* t = this->tete;
		this->tete = this->tete->precedent;
		delete t;
	}
	
	void afficher() {
		std::cout<<this->tete->value<<std::endl;
	}
	
	bool vide() {
		return this->tete == nullptr;
	}
};

int main() {

	Stack s;
	s.init();
	s.add(10);
	std::cout<<s.vide()<<std::endl;
	s.afficher();
	s.detruire();
	std::cout<<s.vide()<<std::endl;
	return 0;
	
	//comment savoir il on doit utiliser une classe ou une struct pour implémenter qlq chose ?
}
