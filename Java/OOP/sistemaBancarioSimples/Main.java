package Java.OOP.sistemaBancarioSimples;

class ContaBancaria {
    
    private int numeroDaConta;
    private String nomeTitular;
    protected double saldo;

    public ContaBancaria(int numeroDaConta, String nomeTitular) {
        this.numeroDaConta = numeroDaConta;
        this.nomeTitular = nomeTitular;
        this.saldo = 0.0;
    }

    public void depositar(int numeroC, String nomeT, double valor){
        if(nomeTitular.equals(nomeT) && numeroDaConta == numeroC){
            saldo += valor;
            System.out.println("Depósito de R$" + valor + " realizado com sucesso.");
        } else {
            System.out.println("Dados inválidos");
        }
    }

    public void sacar(int numeroC, String nomeT, double valor){
        if(nomeTitular.equals(nomeT) && numeroDaConta == numeroC){
            if(valor <= saldo){
                saldo -= valor;
                System.out.println("Saque de R$" + valor + " realizado com sucesso.");
            } else {
                System.out.println("Saque negado. O valor do saque é maior do que o saldo em sua conta.");
            }
        } else {
            System.out.println("Dados inválidos");
        }
    }
    
    public void consultarSaldo(int numeroC, String nomeT){
        if(nomeTitular.equals(nomeT) && numeroDaConta == numeroC){
            System.out.println("Saldo da conta: R$" + saldo);
        }
    }
}


class ContaCorrente extends ContaBancaria {

    private double limiteChequeEspecial;

    public ContaCorrente(int numeroC, String nomeT, double limiteChequeEspecial) {
        super(numeroC, nomeT);
        this.limiteChequeEspecial = limiteChequeEspecial;
    }

    public void verificaLimite() {
        System.out.println("Limite de Cheque Especial: R$" + limiteChequeEspecial);
    }
}

class ContaPoupanca extends ContaBancaria {

    private double taxaJuros;

    public ContaPoupanca(int numeroC, String nomeT, double taxaJuros) {
        super(numeroC, nomeT);
        this.taxaJuros = taxaJuros;
    }

    public void calcularJuros() {
        double juros = this.saldo * taxaJuros / 100;
        this.saldo += juros;
        System.out.println("Juros calculados e adicionados à conta.");
    }
}

public class Main {
    public static void main(String[] args) {
        
        ContaCorrente contaCorrente = new ContaCorrente(1, "Titular CC", 1000.0);
        ContaPoupanca contaPoupanca = new ContaPoupanca(2, "Titular CP", 0.05);

        contaCorrente.depositar(1, "Titular CC", 500.0);
        contaCorrente.sacar(1, "Titular CC", 200.0);
        contaCorrente.consultarSaldo(1, "Titular CC");
        contaCorrente.verificaLimite();

        contaPoupanca.depositar(2, "Titular CP", 1000.0);
        contaPoupanca.calcularJuros();
        contaPoupanca.consultarSaldo(2, "Titular CP");
    }
}
