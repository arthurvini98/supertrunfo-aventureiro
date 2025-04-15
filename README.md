
Super Trunfo - Comparações de cartas

Este é um projeto em linguagem C baseado no jogo **Super Trunfo**, com foco em **cidades ou países**. O programa compara atributos entre duas cartas cadastradas, utilizando um **menu interativo com `switch`** e **lógica condicional com `if-else`** para determinar o vencedor.

Funcionalidades:

- Cadastro de dados para duas cartas (cidade ou país)
- Cálculo automático de **densidade demográfica**
- Menu interativo para o jogador escolher o atributo de comparação
- Regras específicas:
  - A carta com o **maior valor** vence, exceto na **densidade demográfica**, onde o **menor valor** vence
- Exibição clara dos valores e do resultado da comparação
- Tratamento de opção inválida no menu

Atributos disponíveis:

1. Populacao (`int`)
2. Area (`float`)
3. PIB (`float`)
4. Pontos Turisticos (`int`)
5. Densidade Demografica (`float`)

Exemplo de uso:

Ao executar o programa, o menu abaixo será exibido:

```
=== SUPER TRUNFO - MENU DE COMPARACAO ===
Escolha o atributo para comparar:
1 - Populacao
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
Digite sua opcao:
```

Depois da escolha, o programa exibirá os dados das duas cartas e informará qual venceu ou se houve empate.

Como compilar e executar:

```bash
gcc super_trunfo.c -o super_trunfo
./super_trunfo
```

Tecnologias usadas

- Linguagem C
- Compilador GCC (ou outro de sua preferência)

Observações

- Não foram usados acentos nem caracteres como "ç" para evitar problemas de visualização em terminais e compiladores que não suportam UTF-8.

---

Feito por: Arthur Vinicius Vieira Santos
