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
- **Conexão com a internet**: Para a instalação de ferramentas que não estão presentes.

### 📦 **Instalação das dependências**:

Certifique-se de que o **Pandoc** e o **LaTeX** estão instalados:

```bash
sudo apt update
sudo apt install pandoc texlive
