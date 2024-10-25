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

	public int obterNumeroItens() {

		int contador = 0;

		Celula<E> aux = topo;

		while (aux != fundo) {
			contador++;
			aux = aux.getProximo();
		}

		return contador;
	}

	public void inverter() {

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