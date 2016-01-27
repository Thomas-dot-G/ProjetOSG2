# Projet Systeme d'exploitation

Projet arduino utilisant eclipse et les lignes de commandes.

Pour insérer le code dans un arduino, sans utilisé l'IDE arduino:
- Aller dans le dossier du projet sur un terminal
- Notez `make`
- Changer le makeFile du projet pour y indiquer au niveau de `$($(DOWNLOAD)) -F -V -c arduino -p ATMEGA328P -P $(TTY_$(OS)) -b 115200 -U flash:w:build/boot/$(KERNEL_OBJ).hex` le port (apreès -P en remplaçant le `$(TTY_$(OS))`) où est branché l'arduino.

## Groupe 2
