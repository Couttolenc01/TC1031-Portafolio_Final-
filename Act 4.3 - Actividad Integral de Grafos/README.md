Tec de Monterrey
Act 4.3 - Actividad Integral de Grafos (Evidencia Competencia)
¿Qué tengo que hacer?
En este repositorio encontrarás los archivos de entrada, así como las salidas esperadas que podrás usar para probar tu implementación. También encontrarás un archivo "main.cpp". Ahí deberás implementar tu solución. En el archivo deberás colocar en la parte superior, en comentarios, tus datos. Por ejemplo:

// =========================================================
// File: main.cpp
// Author: Edward Elric - A00123456
// Date: 01/01/2021
// =========================================================
De manera individual, desarrolla la solución del siguiente problema:

Para evitar el problema que se tuvo en el Canal de Suez, la compañía naviera "International Seas, LTD." ha determinado que cada carguero tendrá un máximo número de puertos (MNP). Este número indica la cantidad de puertos en los cuáles un carguero puede atracar antes de tener que recorrer la ruta en sentido contrario. Cada vez que la nave atraca en un puerto, disminuye el MNP en 1. Si el valor de MNP llega a cero, el carguero tendrá que "girar" y recorrer su ruta en sentido inverso. Dada de una red de puertos, un puerto inicial de un carguero y un valor MNP, deberás determinar la cantidad de puertos que no van a poder ser visitados por ese carguero.

graph

Toma con ejemplo la red anterior. Si un carguero con MNP de 2 saliera del puerto de Busan, sólo podría llegar a los puertos Yantai, Haikou, Singopore, Mersin, Taipei, Fuzhou, Zhuhai. No podría alcanzar ningún otro puerto, ya que el MNP se habría reducido a cero al llegar a los puertos Haikou, Fuzhou, Merson y Zhuhai. Si aumentamos el valor inicial MNP a 3, saliendo del puerto Busan, se podría llegar a todos los puertos excepto a Karachi y London.

Entrada
Cada entrada tendrá el siguiente formato. Empieza con un número entero, NC, que especifica el número de conexiones entre los puertos de la red. Después, habrá NC pares de nombres de puertos. Estos pares identifican los puertos que están conectados por una ruta de navegación. No habrá más que una ruta de navegación directa entre cualquier par de puertos y ninguna red contendrá más de 30 puertos. Después de la descripción de la red, habrá un número entero, NQ, que especifica el número de consultas que se realizarán. A continuación, habrá NQ líneas conteniendo el nombre del puerto de inicio y el MNP inicial.

Salida
Para cada consulta, muestra una sola línea que indica el número de caso de prueba (numerados secuencialmente desde uno), el número de puertos a los cuales no se puede llegar, el nombre del puerto inicial y el valor inicial de MNP. A continuación encontrarás un ejemplo de entrada y salida.

Ejemplo de entrada
16
Alexandria Algeciras
Algeciras Ambarli
Ambarli Antwerp
Alexandria Balboa
Balboa Bandar
Bandar Barcelona
Antwerp Bremen
Bremen Busan
Algeciras Cai_Mep
Cai_Mep Callao
Ambarli Cartagena
Barcelona Callao
Cai_Mep Cartagena
Callao Charleston
Cartagena Charleston
Charleston Busan
2
Cai_Mep 2
Cai_Mep 3

Ejemplo de salida
Case 1: 5 ports not reachable from port Cai_Mep with MNP = 2.
Case 2: 1 ports not reachable from port Cai_Mep with MNP = 3.

Para probar tu implementación, compila tu programa con el comando:

g++ -std=c++11 main.cpp -o app
Posteriormente, prueba con cada uno de los archivos de entrada de prueba que encontrarás en este repositorio (input1.txt, input2.txt, input3.txt, input4.txt). Los resultados que debes obtener se encuentran en los archivos llamados output1.txt, output1.txt, output1.txt y output1.txt. Para realizar las pruebas, puedes usar las siguientes líneas de código. Por ejemplo, si queremos probar con el archivo de prueba "input1.txt".

./app < input1.txt > mysolution1.txt
diff mysolution1.txt output1.txt
Si el segundo comando no tenga ninguna salida, sabrás que los resultados que obtuviste son los esperados. Recuerda actualizar tu repositorio (git push) cuando hayas terminado tu implementación.

Por último, Realiza en forma individual una investigación y reflexión de la importancia y eficiencia del uso de grafos en una situación problema de esta naturaleza, generando un documento llamado "ReflexAct4.3.pdf ".

¿Bajo qué criterios se evalúa mi evidencia?
80% - Para cada una de las funcionalidades se evaluará:

Excelente (80%) - pasa correctamente todos los casos de prueba.
Muy Bien (60%) - pasa correctamente el 75% de los casos de prueba.
Bien (40%) - pasa correctamente el 50% de los casos de prueba.
Insuficiente (20%) - pasa correctamente menos del 50% de los casos de prueba.
10% - El código deberá seguir los lineamientos estipulados en el estándar de codificación: liga_estándar_codificación

10% - Se respetenan los nombres de las funciones en la aplicación.

¿Dónde la entrego?
Esta actividad forma parte tanto de tu calificación final del curso, así como del portafolio de evidencias de las competencias a desarrollar del curso, por lo que se te pide que en forma individual:

Realices una entrega del código fuente de la solución del problema, en la sección correspondiente dentro de esta plataforma, así como el documento de reflexión individual (ReflexAct4.3.pdf). En la carpeta personal llamada TC1031(Portafolio_Final) que generaste desde la entrega de la actividad 1.3 y que te servirá como preparación para la entrega del portafolio de competencias que se realizará al final del curso, coloca en la subcarpeta Act4.3 tus archivos que solucionaron la actividad 4.3 así como el documento de reflexión individual (ReflexAct4.3.pdf) .
