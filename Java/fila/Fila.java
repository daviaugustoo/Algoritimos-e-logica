package Java.fila;

import java.util.NoSuchElementException;

public class Fila<E> {

	private Celula<E> frente;
	private Celula<E> tras;
	
	Fila() {
		
		Celula<E> sentinela = new Celula<E>();
		frente = tras = sentinela;
	}
	
	public boolean vazia() {
		
		return (frente == tras);
	}
	
	public void enfileirar(E item) {
		
		Celula<E> novaCelula = new Celula<E>(item);
		
		tras.setProximo(novaCelula);
		tras = tras.getProximo();
	}
	
	public E desenfileirar() {
		
		E item = null;
		Celula<E> primeiro;
		
		item = consultarPrimeiro();
		
		primeiro = frente.getProximo();
		frente.setProximo(primeiro.getProximo());
		
		primeiro.setProximo(null);
			
		// Caso o item desenfileirado seja também o último da fila.
		if (primeiro == tras)
			tras = frente;
		
		return item;
	}
	
	public E consultarPrimeiro() {

		if (vazia()) {
			throw new NoSuchElementException("Nao há nenhum item na fila!");
		}

		return frente.getProximo().getItem();

	}
	
	public void imprimir() {
		
		Celula<E> aux;
		
		if (vazia())
			System.out.println("A fila está vazia!");
		else {
			aux = this.frente.getProximo();
			while (aux != null) {
				System.out.print(aux.getItem() + " ");
				aux = aux.getProximo();
			}
		} 	
	}
	
	/* Exercício 1:
	Implemente o método public void concatenar (Fila<E> fila), capaz de
	concatenar, ao final da fila original, a fila passada como parâmetro para o método.*/
	public void concatenar(Fila<E> fila){

		Fila<E> aux = new Fila<>();

		while(!this.vazia()){
			aux.enfileirar(this.desenfileirar());
		}

		while(!fila.vazia()){
			aux.enfileirar(fila.desenfileirar());
		}

		while (!aux.vazia()) {
			this.enfileirar(aux.desenfileirar());
		}
	}

	/* Exercício 2:
	Implemente a função public int obterNumeroItens(), que retorna o número de
	itens na fila.*/
	public int obterQuantidadeItens(){
		
		Celula<E> aux = frente;
		int contador = -1;
		
		while (aux != null) {
			contador++;
			aux = aux.getProximo();
		}

		return contador;
	}

	/* Exercício 3:
	Implemente o método public boolean verificarExistencia(E item), que
	verifica a existência, na fila, de item correspondente àquele que foi passado como
	parâmetro para esse método. Essa correspondência deve basear-se no(s) critério(s)
	empregado(s) na implementação do método de comparação do item. Se o item for
	localizado na fila, esse método deve retornar true. Caso contrário, esse método deve
	retornar false */
	public boolean verificarExistencia(E item){

		Celula<E> aux = frente;

		while(aux != null){
			if(aux.getItem() == item){
				return true;
			}
			aux = aux.getProximo();
		}

		return false;
	}

	/* Exercício 4:
	Implemente o método public int obterNumItensAFrente(E item)
	throws Exception, que retorna o número de itens que estão localizados, na fila, a
	frente do item correspondente àquele que foi passado como parâmetro para esse método.
	Essa correspondência deve basear-se no(s) critério(s) empregado(s) na implementação do
	método de comparação do item. Se o item não for localizado na fila, esse método deve
	lançar uma exceção */
	public int obterNumItensAFrente(E item) throws Exception{
		try{
			Celula<E> aux = frente;
			int contador = -1;
	
			while(aux != null){
				if(aux.getItem() == item){
					return contador;
				}
				contador++;
				aux = aux.getProximo();
			}
			throw new NoSuchElementException("Item não encontrado na fila!");
		} catch(NoSuchElementException e){
			System.err.print(e.getMessage());
			return -1;
		}
	}

	/* Exercício 5: 
	Implemente a função public Fila<E> copiar(), capaz de criar e retornar uma
	cópia exata da fila. Acrescente à assinatura desse método as exceções que forem
	necessárias. */
	public Fila<E> copiar(){ //Decidi fazer sem excessões por enquanto porque o burro tava fazendo com void e fila como parametro

		Fila<E> copia = new Fila<>();  // https://www.youtube.com/watch?v=ZA5nf5CjwQI
		Celula<E> aux = frente.getProximo(); // copia todas as celulas inclusive a null ent é para ignorar a null

		while (aux != null) {
			copia.enfileirar(aux.getItem());
			aux = aux.getProximo();
		}

		return copia;
	}

	/* Exercício 6:
	Implemente a função public Fila<E> dividir(), capaz de dividir a fila original
	em duas, da seguinte forma: devem permanecer na fila atual os itens que ocupam,
	atualmente, posição ímpar nessa fila. Devem ser enfileirados, na fila que será retornada por
	esse método, os itens que ocupam, atualmente, posição par na fila original. Considere que
	o primeiro item da fila (item localizado após a célula sentinela), ocupa a posição 0.*/
	public Fila<E> dividir(){

		Fila<E> filaPar = new Fila<E>();
		Fila<E> aux = new Fila<E>();
		int verificador = 0;

		while (!this.vazia()) {
			
			if(verificador % 2 == 0){
				filaPar.enfileirar(this.desenfileirar());
			}else{
				aux.enfileirar(this.desenfileirar());
			}

			verificador++;
		}

		while (!aux.vazia()) {
			this.enfileirar(aux.desenfileirar());
		}

		return filaPar;
	}

}