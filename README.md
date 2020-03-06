# Priorityqueue in C++

## Methoden

### void push(int id, double priority);

Fügt eine Id mit meiner Priorität ein.

### void push(int id, double priority, double priority_old);

Ändert die Priorität einer Id (wichtig bspw. beim Dijkstra-Algorithmus)

### int  pop(int & id, double & priority);

List (zerstörend) die als nächstes anstehende Id zusammen mit ihrer Priorität. Gibt 0 zurück,
im Fehlerfall (Priorityqueue ist leer) aber 1.

### void print();
Gibt die Priorityqueue aus


## Lizenz

Das Projekt wird unter der MIT-Lizenz publiziert.
Keinerlei Gewährleistung bei Schäden durch Benutzung!

## Autor

Winfried Bantel, Hochschule Aalen
