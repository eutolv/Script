# 🛠️ **Pentest Automático - Script de Análise de Vulnerabilidades**

## 🚀 **Introdução**

Este script foi desenvolvido para realizar um **pentest básico e automático** na máquina local, com o objetivo de identificar vulnerabilidades de segurança e gerar relatórios detalhados. Ele utiliza ferramentas essenciais para auditoria de segurança, como **Nmap**, **Nikto**, **chkrootkit**, **rkhunter**, **sslscan**, **searchsploit**, e **netcat**, para realizar a varredura de serviços e vulnerabilidades no sistema.

O script verifica se as ferramentas necessárias estão instaladas e, caso não estejam, faz a instalação automaticamente. Após a execução, ele gera um **relatório completo**, tanto em **Markdown** quanto em **PDF**.

## ⚙️ **Ferramentas Utilizadas**

O script utiliza as seguintes ferramentas para realizar as análises de segurança:

- **chkrootkit**: Detecta rootkits na máquina local.
- **rkhunter**: Verifica a presença de rootkits e backdoors.
- **nmap**: Realiza varreduras de rede para identificar portas abertas e serviços expostos.
- **nikto**: Analisa vulnerabilidades em servidores web.
- **searchsploit**: Busca vulnerabilidades conhecidas no banco de dados ExploitDB.
- **sslscan**: Verifica a segurança de conexões SSL/TLS.
- **netcat**: Realiza testes de conectividade e varredura de portas.

## 🛠️ **Requisitos**

### 🔧 **Ferramentas necessárias**:

- **Sistema operacional**: **Linux** (recomendado Kali Linux ou qualquer distro baseada em Debian).
- **Pandoc** e **LaTeX**: Para gerar o relatório em PDF.
- **Conexão com a internet**: Para a instalação de ferramentas ausentes.

### 📦 **Instalação das dependências**:

Certifique-se de que o **Pandoc** e o **LaTeX** estão instalados:

```bash
sudo apt update
sudo apt install pandoc texlive
```

### 🔨 **Instalação das ferramentas de pentest**:

O script também verifica e instala automaticamente as ferramentas necessárias. Para garantir que todas as dependências sejam atendidas, execute:

```bash
./pentest
```

## 📜 **Como Usar**

### Passo 1: Clone este repositório ou baixe o script

```bash
git clone https://github.com/seu-usuario/pentest.git
cd pentest
```

### Passo 2: Torne o script executável

```bash
chmod +x pentest
```

### Passo 3: Execute o script

```bash
./pentest
```

O script realizará as seguintes etapas automaticamente:

1. **Instalar as ferramentas necessárias** (caso não estejam instaladas).
2. **Executar o pentest**, gerando um relatório detalhado com as seguintes informações:
    - **Segurança local** (chkrootkit, rkhunter).
    - **Segurança de rede** (Nmap, Nikto).
    - **Vulnerabilidades conhecidas** (searchsploit).
    - **Configurações SSL/TLS** (sslscan).
    - **Conectividade de rede** (netcat).
3. **Gerar dois tipos de relatório**: um em **Markdown** e outro em **PDF**, ambos na pasta `pentest_results`.

### Exemplo de Saída:

```bash
Relatório completo gerado em PDF: /mnt/c/Users/Usuario/Downloads/pentest_results/pentest_report_2024-11-17_19-58.pdf
```

## 📄 **Relatório Gerado**

O relatório gerado pelo script inclui informações detalhadas sobre a segurança da máquina. Ele é dividido em seções, com informações relevantes sobre cada ferramenta executada, incluindo recomendações para correção e segurança.

As seções do relatório incluem:

- **Informações do Sistema**: Detalhes sobre a máquina local.
- **Segurança Local**: Resultados do **chkrootkit** e **rkhunter**.
- **Segurança de Rede**: Análise realizada com **Nmap** e **Nikto**.
- **Vulnerabilidades Conhecidas**: Resultados da busca de exploits com **searchsploit**.
- **SSL/TLS e Conectividade**: Resultados de análise com **sslscan** e **netcat**.

### Formatos de Relatório:

- **Markdown**: Formato simples, legível e fácil de editar.
- **PDF**: Formato mais profissional, adequado para apresentações ou documentação.

## 🔧 **Customização**

Se você deseja personalizar o script para incluir outras ferramentas ou ajustar as opções de execução, siga os seguintes passos:

1. **Verifique se a ferramenta está instalada**: O script usa a função `check_and_install_tool` para garantir que todas as ferramentas necessárias estão disponíveis.
2. **Adicionar novas ferramentas**: Para adicionar novas ferramentas de pentest, basta inserir as verificações e execuções dentro do script.

## 🐞 **Problemas Conhecidos**

### 🛑 **Problema com o LaTeX**:

Se você encontrar erros relacionados ao LaTeX, como "Unicode character not set up", isso pode ocorrer devido a problemas de codificação de caracteres especiais.

### 🔧 **Solução**:

1. Verifique se o Pandoc e o LaTeX estão corretamente instalados:

```bash
sudo apt update
sudo apt install pandoc texlive
```

2. Certifique-se de que o relatório não contém caracteres especiais incompatíveis com o LaTeX.

### ❗ **Problema de Codificação com o PDF**:

Caso o PDF não seja gerado corretamente devido à codificação de caracteres especiais, você pode tentar alterar o formato do arquivo de saída no Pandoc ou configurar corretamente a codificação do LaTeX.

## 🌍 **Contribuições**

Contribuições são bem-vindas! Se você encontrou um bug ou deseja adicionar novas funcionalidades ao script, sinta-se à vontade para abrir uma **issue** ou enviar um **pull request**.

---

🚨 **Aviso de responsabilidade**: Este script é destinado para fins educacionais e para testes em ambientes controlados. **Nunca realize pentests em sistemas sem a permissão explícita do proprietário.** Use-o com responsabilidade e siga as melhores práticas de segurança!

---

### Principais Mudanças:

1. **Instalação de Ferramentas**: Agora há um aviso de que o script pode instalar as dependências automaticamente.
2. **Execução de Relatório em PDF**: Detalhamento do formato de relatório em PDF gerado, com foco no uso do Pandoc e LaTeX.
3. **Revisão na Secção de Customização**: Facilitação na customização do script para adicionar novas ferramentas.
4. **Melhoria no Aviso de Responsabilidade**: Reforço na segurança e legalidade do uso do script, com ênfase em não usar sem permissão.

Esse formato deve ser mais claro e organizado, dando destaque às melhorias no script.
