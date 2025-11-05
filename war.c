ne// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//        
// ============================================================================
//
// OBJETIVOS:
// - Modularizar completamente o código em funções especializadas.
// - Implementar um sistema de missões para um jogador.
// - Criar uma função para verificar se a missão foi cumprida.
// - Utilizar passagem por referência (ponteiros) para modificar dados e
//   passagem por valor/referência constante (const) para apenas ler.
// - Foco em: Design de software, modularização, const correctness, lógica de jogo.
//
// ============================================================================

// Inclusão das bibliotecas padrão necessárias para entrada/saída, alocação de memória, manipulação de strings e tempo.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

Nome do Territorio: Brasil
Cor do Exercito: Verde
    Numero de Tropas: 3

    Nome do Territorio: Peru
    Cor do Exercito: Branco
    Numero de Tropas: 5

    Nome do Territorio: Alemanha
    Cor do Exercito: Vermelho
    Numero de Tropas: 2

    Nome do Territorio: Mexico
    Cor do Exercito: Amarelo
    Numero de Tropas: 4

    Nome do Territorio: Franca
    Cor do Exercito: Laranja
    Numero de Tropas: 3

    Nome do Territorio: Canadá
    Cor do Exercito: Cinza
    Numero de Tropas: 3
    

// --- Constantes Globais ---
// Definem valores fixos para o número de territórios, missões e tamanho máximo de strings, facilitando a manutenção.
#define num territorios 06
#define num cores 06
#define num tropas 20
    
// --- Estrutura de Dados ---
// Define a estrutura para um território, contendo seu nome, a cor do exército que o domina e o número de tropas.
typedef struct {
char nome[max_nome];
char corExercito[max_cor];
int numTropas;
int vida;       / vida do territorio
int poder;      / poder de ataque do territorio
} Territorio;

/ Estrutura para dados do jogador
typedef struct {
char cor[max_cor];
int territorios;
int Tropas total;
int Vida total;
int poder total;
int pontos;

} Estatistica Exercito

// --- Protótipos das Funções ---
// Declarações antecipadas de todas as funções que serão usadas no programa, organizadas por categoria.
// Funções de setup e gerenciamento de memória:
Territorio* alocarmapa
void inicializarTerritorios(Territorio*mapa,const jogador)
void liberarMemoria(Territorio*mapa)

// Funções de interface com o usuário:
void ExibirMenuPrincipal;
void ExibirMapa(const Territorio*mapa);

// Funções de lógica principal do jogo:
void fasedeAtaque(Territorio*mapa,cons jogador*)

// Função utilitária:
void limparBufferEntrada(void);

// --- Função Principal (main) ---
// Função principal que orquestra o fluxo do jogo, chamando as outras funções em ordem.
int main() {
    // 1. Configuração Inicial (Setup):
Removido setlocale
    srand(unsigned int)time(NULL)

/Configuração do jogador
Jogador = {0};/ Inicializa com zeros

    Inicialização
    inicializarterritorios(mapa*jogador)
    configurarjogador

int missaojogador = sortearMissao;
    int opcao;
    int jogos

    printf(Sua missao foi sorteada);
    printf(Escolha uma opcao)
        scanf(%opcao)
        limparBufferEntrada()

        switch opcao)
        case 1:
        / Opcao 1: Inicia a fase de ataque
        fasedeAtaque(mapa*jogador)
            break;

        case 2:
            Verifica se a condicao de vitoria foi alcancada e informa ao jogador:
            if (VerificarVitoria(mapa*missao*jogador)
                printf(PARABENS! VOCE VENCEU O JOGO! ***n);
            exibirResultadoFinal(mapa,jogador)1
                }else{
        printf(Missao Ainda nao foi cumprida.Continue jogando!)
            }
    break;
    
    //   - Opção 0: Encerra o jogo.
    printf(Encerrando o jogo);
        exibirResultadoFinal(mapa,jogador,0)
        break;

    } while(jogoAtivo)
        
    // 3. Limpeza:
        liberarmemoria(mapa);
    return 0;
    
    
    // - Ao final do jogo, libera a memória alocada para o mapa para evitar vazamentos de memória.

    return 0;
}

// --- Implementação das Funções ---

// alocarMapa():
// Aloca dinamicamente a memória para o vetor de territórios usando calloc.
// Retorna um ponteiro para a memória alocada ou NULL em caso de falha.
Territorio* alocarMapa(void)
return (Territorio)calloc (num_territorios)sizeof
    
// inicializarTerritorios():
// Preenche os dados iniciais de cada território no mapa (nome, cor do exército, número de tropas).
// Esta função modifica o mapa passado por referência (ponteiro).
void inicializarTerritorios(Territorios*mapa,const jogador*)
const char* nomes[NUM_TERRITORIOS]
Brasil,Peru,Alemanha,Mexico,Franca,Canada,
    
    const char cores [NUM_CORES] = Verde,Branco,Vermelho,Amarelo,Laranja,Cinza,

for(int i = 0 * NUM_TERRITORIOS
    strcpy(mapa.nome
// liberarMemoria():
// Libera a memória previamente alocada para o mapa usando free.
void LiberarMemoria(Territorio*mapa)
    if(mapa) = null)
    free(mapa)
    


// exibirMapa():
// Mostra o estado atual de todos os territórios no mapa, formatado como uma tabela.
// Usa 'const' para garantir que a função apenas leia os dados do mapa, sem modificá-los.
void exibirmapa(const Territorio*mapa)
for(int = 0 *NUM_TERRITORIOS) {
    
// exibirMissao():
// Exibe a descrição da missão atual do jogador com base no ID da missão sorteada.
void exibirMissao(int idMissao)
printf(SuaMissao)

// faseDeAtaque():
// Gerencia a interface para a ação de ataque, solicitando ao jogador os territórios de origem e destino.
// Chama a função simularAtaque() para executar a lógica da batalha.
void fasedeAtaque(Territorio*mapa*jogador)


// simularAtaque():
// Executa a lógica de uma batalha entre dois territórios.
// Realiza validações, rola os dados, compara os resultados e atualiza o número de tropas.
// Se um território for conquistado, atualiza seu dono e move uma tropa.
void simularAtaque(Territorio)}

// sortearMissao():
// Sorteia e retorna um ID de missão aleatório para o jogador.
int SortearMissao(void)
return

// verificarVitoria():
// Verifica se o jogador cumpriu os requisitos de sua missão atual.
// Implementa a lógica para cada tipo de missão (destruir um exército ou conquistar um número de territórios).
// Retorna 1 (verdadeiro) se a missão foi cumprida, e 0 (falso) caso contrário.
int VerificarVitoria(const Territorio *mapa,int,const char,
    
// limparBufferEntrada():
// Função utilitária para limpar o buffer de entrada do teclado (stdin), evitando problemas com leituras consecutivas de scanf e getchar.
void LimparBufferEntrada(void)
int c

printf
[nome]
[corExercito]
[tropas]

**}
