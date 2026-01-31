# iotguardian
🔐 **Alarme Residencial IoT com ESP32**
Sistema de alarme residencial inteligente baseado em ESP32, com detecção de movimento via sensor PIR, sinalização visual e sonora, e arquitetura preparada para integração com MQTT, backend Node.js e banco de dados PostgreSQL.

Projeto desenvolvido com foco acadêmico e profissional, seguindo boas práticas de engenharia embarcada e IoT, com potencial de evolução para um produto real.

📌 **Visão Geral**

Este projeto implementa um sistema de alarme IoT capaz de:
Detectar movimento humano
Indicar eventos de forma visual (LED) e sonora (buzzer)

**Servir como base para:**
Monitoramento remoto
Registro de eventos

**Integração com aplicações web ou mobile**

O sistema foi desenvolvido de forma modular, facilitando testes, manutenção e evolução.

🧠 **Conceitos aplicados**

***Sistemas embarcados com ESP32***
Sensoriamento digital (PIR)
Atuadores (LED e buzzer)

***Programação estruturada***

_Validação individual de componentes_
_Arquitetura IoT orientada a eventos_
_Preparação para comunicação MQTT_

🧩 **Componentes Utilizados**
Componente	Descrição
1. ESP32	Microcontrolador principal
2. Sensor PIR Keyestudio	Detecção de movimento
3. LED (onboard GPIO 2)	Indicação visual
4. Buzzer ativo	Alarme sonoro
5. Protoboard	Montagem do circuito
6. Jumpers	Conexões
7. Cabo USB	Programação e alimentação
🔌 Ligações do Circuito

📸 Obs: a imagem final do circuito será substituída por uma foto real do protótipo montado.

⚙️ **Funcionamento do Sistema**

O ESP32 inicializa e aguarda a estabilização do sensor PIR

O sensor monitora movimento continuamente

**Quando há movimento:**
LED é aceso
Buzzer emite sinal sonoro

**Sem movimento:**
LED é apagado
Buzzer é desligado

**Este comportamento representa o funcionamento básico de um sistema de alarme residencial.**

🧪 *Testes Realizados*

Teste individual do sensor PIR

Validação do LED como indicador visual

Teste de buzzer ativo vs passivo

Teste de resposta em tempo real

Durante os testes, foi identificada a diferença entre buzzer passivo e ativo, optando-se pelo buzzer ativo por simplicidade e maior eficiência sonora.

🧰 Código de Teste Atual (Resumo)
```C
if (motion == HIGH) {
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(BUZZER_PIN, HIGH);
} else {
  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);
}
```

# O código completo encontra-se neste repositório.

🚀 Próximas Etapas (Roadmap)

Implementação de máquina de estados

DISARMED

ARMING

ARMED

ALERT

Integração com MQTT (HiveMQ)

Backend em Node.js

Persistência de eventos em PostgreSQL

Dashboard web para monitoramento

Evolução para múltiplos sensores

🎓 Aplicações Acadêmicas

Este projeto pode ser aplicado em disciplinas como:

Sistemas Embarcados

Internet das Coisas (IoT)

Automação

Redes

Engenharia de Software

Projetos Integradores

👨‍💻 Autor

Relton Fidelis Ferreira Lima
Desenvolvedor | IoT | Sistemas Embarcados | Backend
ESP32 • Node.js • MQTT • PostgreSQL

📄 Licença

Projeto desenvolvido para fins acadêmicos e educacionais.
Livre para estudo e evolução.
