import java.util.NoSuchElementException;

public class Pilha<E> {

	private Celula<E> topo;
	private Celula<E> fundo;

	public Pilha() {

		Celula<E> sentinela = new Celula<E>();
		fundo = sentinela;
		topo = sentinela;

	}

	public boolean vazia() {
		return fundo == topo;
	}

	
	public void empilhar(E item) {
		
		topo = new Celula<E>(item, topo);
	}
	
	public E desempilhar() {
		
		E desempilhado = consultarTopo();
		topo = topo.getProximo();
		return desempilhado;
		
	}
	
	public E consultarTopo() {
		
		if (vazia()) {
			throw new NoSuchElementException("Nao há nenhum item na pilha!");
		}
		
		return topo.getItem();
		
	}
	
	/* Exercício 1:
	Implemente o método public void concatenar (Pilha<E> pilha), capaz de
	concatenar, ao final da pilha original, a pilha passada como parâmetro. */
	public void concatenar(Pilha<E> pilha) {
		
		Pilha<E> aux = new Pilha<E>(); 
	
		while(!pilha.vazia()) {
			aux.empilhar(pilha.desempilhar());
		}
	
		while(!this.vazia()) {
			aux.empilhar(this.desempilhar());
		}
		
		while(!aux.vazia()) {
			this.empilhar(aux.desempilhar());
		}
	
	}

	/* Exercício 2:
	Implemente a função public int obterNumeroItens(), que retorna o número de
	itens da pilha. */ 
	public int obterNumeroItens() {

		int contador = 0;

		Celula<E> aux = topo;

		while (aux != fundo) {
			contador++;
			aux = aux.getProximo();
		}

		return contador;
	}

	/* Exercício3:
	Implemente o método public void inverter(), capaz de inverter a pilha */
	public void inverter() { // Foi Escolha pessoal inverter na original

		Pilha<E> aux = new Pilha<E>();
		Pilha<E> aux2 = new Pilha<E>();

		while (!this.vazia()) {
			aux.empilhar(this.desempilhar());
		}

		while (!aux.vazia()) {
			aux2.empilhar(aux.desempilhar());
		}

		while (!aux2.vazia()) {
			this.empilhar(aux2.desempilhar());
		}

	}

	// Exercício que caiu na prova de aeds2

	public Pilha<E> duplicarPilha(Pilha<E> pilha){

		Pilha<E> resultado = new Pilha<E>();
		Celula<E> aux = topo;

		while (aux != fundo) {
			resultado.empilhar(aux.getItem());
			resultado.empilhar(aux.getItem());
			aux = aux.getProximo();
		}

		return resultado;
	}

	public void exibir() {

		if (vazia()) {
			System.out.println("Pilha vazia!");
			return;
		}

		Celula<E> aux = topo;

		while (aux != fundo) {
			System.out.println(aux.getItem());
			aux = aux.getProximo();
		}

		System.out.println();
	}

}