# Libft

## Descripción del proyecto

Este proyecto consiste en programar una librería en C. Tu librería tendrá un montón de funciones de propósito general en las que se apoyarán tus programas.

## Objetivos del proyecto

- Comprender cómo funcionan las funciones estándar de `libc` y cómo implementarlas desde cero.
- Mejorar las habilidades de programación en C respetando estrictos estándares de codificación.
- Aprender a gestionar la memoria dinámicamente y evitar fugas de memoria.
- Familiarizarse con herramientas básicas como `Makefile` y el uso de archivos de cabecera.

## Contenidos del proyecto

### Parte Obligatoria

1. **Funciones de libc:** 
   Implementación de funciones como `strlen`, `strcpy`, `memset`, `atoi`, entre otras, siguiendo los prototipos originales pero con un prefijo `ft_`.
   
2. **Funciones adicionales:**
   - `ft_substr`
   - `ft_strjoin`
   - `ft_strtrim`
   - `ft_split`
   - `ft_itoa`
   - Otras funciones útiles para manipular cadenas y números.

### Parte Bonus

Implementación de funciones para trabajar con listas enlazadas utilizando la estructura `t_list`.

- Crear nodos (`ft_lstnew`).
- Añadir nodos al inicio o al final (`ft_lstadd_front`, `ft_lstadd_back`).
- Eliminar nodos y listas completas (`ft_lstdelone`, `ft_lstclear`).
- Iterar y transformar listas (`ft_lstiter`, `ft_lstmap`).

### Archivos entregados

- **`libft.h`:** Archivo de cabecera que contiene los prototipos de todas las funciones y las definiciones necesarias.
- **Archivos `.c`:** Implementación de cada función.
- **`Makefile`:** Automático para compilar la librería con las siguientes reglas:
  - `make all`: Compila la librería.
  - `make clean`: Elimina archivos objeto.
  - `make fclean`: Elimina archivos objeto y la librería.
  - `make re`: Limpia y recompila todo.
  - `make bonus`: Compila las funciones bonus si están implementadas.

## Uso

1. Clona el repositorio:
   ```bash
   git clone <url-del-repositorio>
   cd libft
