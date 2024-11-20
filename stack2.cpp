#include <iostream>

template <class T>
class Stack {
	public:
		const int taille;
		T* tab;
		int i;
	
	public:
		inline Stack(int t) : taille(t) {
		tab = new T[taille];
		i = 0;
	}
	
		inline Stack& operator=(Stack const& autre) {
		if(this != &autre && autre.taille == taille) {
			delete [] tab;
			i = autre.i;
			tab = new T[taille];
			for (int j=0; j<taille; j++) {
				tab[j] = autre.tab[j];
			}
		}
		return *this;
	}
	
		inline void add(T n) {
		tab[i] = n;
		i++;
	}
	
		inline const T tete() {
		return tab[i];
	}
	
		inline void detruire() {
		i--;
	}
	
	inline ~Stack() {
		delete [] tab;
	}
};

template <class T> std::ostream& operator<<(std::ostream& os, const Stack<T>& s) {
	for (int j=0; j<s.i; j++) {
		os<<s.tab[j]<<std::endl;
	}
	return os;
}

int main() {

	Stack<int> s(3);
	s.add(1);
	std::cout<<s;
	s.detruire();
	std::cout<<s;
	
	Stack<std::string> s2(10);
	s2.add("rat");
	std::cout<<s2;
	s2.detruire();
	std::cout<<s2;
	return 0;
	
}
