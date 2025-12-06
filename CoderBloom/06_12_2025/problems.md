<details>
<summary><h1> A. Zapatos Rotos - Plan B</summary>

## Descripción del Problema

Cada año, los pastores, a Belén, corren presurosos y llevan, de tanto correr, los zapatos rotos. Este año decidieron que la estrategia de hace 3 años era muy complicada y decidieron utilizar otra. La gran idea que tuvieron fue organizarse y poner a trabajar sus ovejas: las van a poner en una gran fila para ir corriendo sobre ellas como piedras en un río, y con los suave de la lana de las ovejas, ¡ni siquiera es necesario usar zapatos! Para lograr llegar hasta su lejano destino, las ovejas que van quedando hasta atrás corren a formarse al frente de la fila antes de que lleguen los pastores.

Hay en total **N** pastores y **O** ovejas. El grupo de pastores inicia parado sobre las primeras **N** ovejas (siempre es cierto que **N ≤ O**). ¿Pueden los pastores lograr recorrer una distancia de **D** ovejas si es que logran convencer a las ovejas que corran al doble de rápido que ellos?

## Entrada

Un renglón con tres enteros **N**, **O** y **D**, indicando la cantidad de pastores, ovejas y distancia (medida en ovejas) que deben recorrer los pastores, respectivamente.

## Salida

`SI` (sin comillas) si logran recorrer la distancia sin que ningún pastor caiga al suelo. De lo contrario, imprime `NO`.

## Ejemplos

| Entrada   | Salida | Explicación                                                                                                                                                                                                                                                                                    |
| --------- | ------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `3 5 5`   | `SI`   | Hay exactamente la cantidad de ovejas necesarias para cubrir todo el camino.                                                                                                                                                                                                                   |
| `3 5 100` | `SI`   | Las ovejas libres pueden reposicionarse continuamente. Aunque la oveja 1 podría haber alcanzado una posición más, inmediatamente se acomoda para que el pastor la pueda pisar. De ahí en adelante la primer oveja se puede acomodar al frente de la fila antes de que el primer pastor llegue. |
| `4 5 10`  | `NO`   | Aún y cuando la oveja libre corre al doble de rápido, no alcanza a acomodarse a tiempo para que el pastor al frente de la fila pise sobre ella en el segundo paso.                                                                                                                             |

## Límites

- `1 ≤ N ≤ O ≤ 1,000,000,000`
- `1 ≤ D ≤ 1,000,000,000`

## Solución

[Ver código](./A_Zapatos_Rotos_Plan_B.cpp)

</details>

<details>
<summary><h1>B. Festival de Velas y Faroles</summary>

## Descripción del Problema

En Colombia existe el Festival de Velas y Faroles, celebrado cada 7 de diciembre. Una tradición en la que las calles se iluminan con faroles artesanales, velas y recorridos llenos de luz.

Para la edición de este año, Luciana compró luces automatizadas para su casa. Para hacerla más llamativa, compró luces de dos colores: rojas y azules, cada una con un intervalo fijo de apagado.

Todas las luces comienzan apagadas al inicio y repiten su patrón periódicamente. Luciana quiere crear un efecto especial de sonido exactamente cuando todas las luces se apaguen al mismo tiempo.

Tu tarea es ayudar a Luciana a calcular cada cuántos segundos ocurrirá ese instante de sincronía.

## Entrada

Dos enteros **R** y **A**, que indican cada cuántos segundos se apagan la luces rojas y azules, respectivamente.

## Salida

Un entero que indica cada cuántos segundos, todas las luces estarán apagadas simultáneamente.

## Ejemplos

| Entrada | Salida | Explicación                                                                                                                                |
| ------- | ------ | ------------------------------------------------------------------------------------------------------------------------------------------ |
| 4 6     | 12     | Las luces rojas se apagan cada 4 segundos y las azules cada 6. Por lo tanto, cada 12 segundos todas las luces se apagarán simultáneamente. |
| 5 7     | 35     |                                                                                                                                            |

## Límites

- `1 ≤ R,A ≤ 1 000 000`

## Solución

[Ver código](./B_Festival_Velas_Faroles.cpp)

</details>

<details>
<summary><h1>C. asistencIA para entrega de regalos</summary>

## Descripción del Problema

Este año Santa Claus decidió modernizar su forma de entregar regalos utilizando un nuevo sistema Guia de Presentes en Trineo. El sistema fue vibe codeado desarrollado por elfos que no revisaron bien los casos de uso y la estrategia de entrega resultante no parece ser muy eficiente.

El sistema funciona solo en una línea de **N** casas, numeradas de 1 a N, y sigue la estrategia descrita a continuación:

- cada casa tiene un rating **Ri** que indica qué tan bien portados fueron los niños que la habitan.
- busca la casa a la que no se hayan entregado regalos con el mayor rating **Ri**. En caso de empate, escoge la que está más a la izquierda (más cerca de la casa 1).
- el trineo se estaciona frente a esa casa.
- de ahí estira 3 brazos robóticos que entregan los regalos simultáneamente a la casa frente a la que está estacionado el trineo y las dos casas adyacentes.
- y luego se repite el procedimiento hasta haber entregado regalos todas las casas.

Ada, que es practicante de verano, decidió escribir un simulador que evalúa la estrategia de GPT para ver cuánto tiempo tarda en completar la entrega de regalos.

## Entrada

En el primer renglón hay un entero **N** indicando el número de casas en la fila. En el siguiente renglón hay **N** enteros **Ri** que indican el rating de la i-ésima casa.

## Salida

Un solo entero indicando la cantidad de casas que visita la estrategia de GPT.

## Ejemplos

| Entrada          | Salida | Explicación                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    |
| ---------------- | ------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| 5<br>1 2 3 4 5   | 3      | La primera casa a visitar es la de rating 5, y al estacionarse ahí se entregan regalos a la casa de rating 4 y 5 (el brazo robótico que entrega a la derecha no tiene casa que atender).<br>De ahí la siguiente casa que requiere entrega es la de rating 3, y al visitarla se entrega regalo a la casa de rating 3 y la casa de rating 2. Nuevamente el brazo robótico derecho no tiene nada que hacer ya que la casa 4 ya había recibido sus regalos.<br>Finalmente GPT visita la casa de rating 1 para entregar el último regalo.<br>En total se visitan 3 casas: 1, 3 y 5. |
| 6<br>1 3 2 4 6 5 | 2      | Esta vez GPT tiene suerte y realiza el número óptimo de visitas: Primero la casa de rating 6, y entrega regalos a las casas de rating, 4, 6 y 5.<br>Y después a la casa de rating 3, y entrega regalos a las casas de rating 1, 3 y 2.                                                                                                                                                                                                                                                                                                                                         |

## Límites

- `1 ≤ N ≤ 100 000`
- `1 ≤ Ri ≤ 1 000 000 000`

## Solución

[Ver código](./C_asistencIA_entrega_regalos.cpp)

</details>

<details>
<summary><h1>D. Receta incompleta</summary>

## Descripción del Problema

Es nochebuena y la familia se dispone a preparar la cena navideña. Antes de empezar, se ponen de acuerdo en la lista de platillos para que la cena quede perfecta.

Una vez decidido el menú, hay que preparar la lista de ingredientes. Y una vez que tienen la lista de ingredientes hay que ver qué ingredientes tienen disponibles.

Finalmente, hay que ponerse creativos, porque no necesariamente tienen todos los ingredientes, y hay que hacer sustituciones. Para cada grupo de sustituciones, es necesario encontrar exactamente un ingrediente de ese grupo. Y cada ingrediente disponible se puede usar máximo una vez.

Veamos un ejemplo. Supongamos que la receta va a ser para hornear un pastel. Tenemos los siguientes ingredientes: harina, maicena, azucar, pintura_vegetal, mantequilla, levadura. Y tenemos la siguiente receta:

- harina
- aceite mantequilla
- azucar
- levadura bicarbonato

La receta se puede hornear porque hay harina, mantequilla, azucar, levadura. Algunos ingredientes disponibles no se necesitan, y aunque la receta pide aceite, tenemos mantequilla.

Si, en cambio, la receta pidiera vainilla, por ejemplo, como no está disponible, habrá que ir de compras de último minuto.

## Entrada

En el primer renglón hay dos enteros **N** y **M**, que indican la cantidad de ingredientes disponibles y la cantidad de ingredientes en la receta para la cena. En los siguientes **N** renglones hay el nombre de un ingrediente disponible. En los siguientes **M** renglones hay una lista de posibles ingredientes que requiere la receta.

## Salida

Un renglón diciendo “A cocinar!” si la receta se puede cocinar. Y “De compras!” si hay que ir de compras de último minuto.

## Ejemplos

| Entrada                                                                                                                                                                                 | Salida      | Explicación                                                                                                                                      |
| --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ----------- | ------------------------------------------------------------------------------------------------------------------------------------------------ |
| 6 4<br>harina<br>maicena<br>azucar<br>pintura_vegetal<br>mantequilla<br>levadura<br>harina<br>aceite mantequilla<br>azucar<br>levadura bicarbonato                                      | A cocinar!  | Es el ejemplo en la descripción del problema.                                                                                                    |
| 6 5<br>harina<br>maicena<br>azucar<br>pintura_vegetal<br>mantequilla<br>levadura<br>harina<br>aceite mantequilla<br>azucar<br>levadura bicarbonato<br>huevo pure_de_manzana             | De compras! | No hay ningún ingrediente que cumpla el último grupo de requisitos, no hay ni huevo ni pure_de_manzana.                                          |
| 6 5<br>harina<br>maicena<br>azucar<br>pintura_vegetal<br>mantequilla<br>levadura<br>harina<br>aceite mantequilla<br>azucar<br>levadura bicarbonato<br>huevo pure_de_manzana mantequilla | De compras! | Esta vez la última lista de opciones incluye mantequilla, pero ya habíamos usado la mantequilla en lugar del aceite y no se puede usar otra vez. |

## Límites

- `1 ≤ N, M ≤ 50`
- Cada ingrediente tiene un nombre formado por letras minúsculas y posiblemente guiones bajos

## Solución

[Ver código](./D_Receta_incompleta.cpp)

</details>

<details>
<summary><h1>E. asistencIA para entregar regalos (v2)</h1></summary>

## Descripción del Problema

Después de analizar los resultados del simulador de Ada, Santa Claus y su equipo concluyeron que la estrategia para entrega de regalos del sistema Guia de Presentes en Trineo es injusta. Esto es porque los habitantes de una casa que no se hayan portado bien durante el año pueden recibir regalos pronto por el simple hecho de vivir al lado de una casa cuyos habitantes se portaron muy bien.

Para corregir esto, la versión dos del sistema GPT considera el rating conjunto de las casas a las que entregaría regalos en una parada dada.

**Formalmente:** el sistema funciona solo en una línea de casas, numeradas de 1 a **N**, y sigue la estrategia descrita a continuación:

- Cada casa tiene un rating que indica qué tan bien portados fueron los niños que la habitan.
- Busca la casa central de un grupo de 3 casas tal que la suma de los ratings de las casas que aún no hayan recibido regalos, sea máxima. En caso de empate, escoge el grupo de 3 casas que está más a la izquierda (más cerca de la casa 1).
- El trineo se estaciona frente a la casa central de ese grupo.
- De ahí estira 3 brazos robóticos que entregan los regalos simultáneamente a la casa frente a la que está estacionado el trineo y las dos casas adyacentes.
- Y luego se repite el procedimiento hasta haber entregado regalos todas las casas.

La intención de esta estrategia es que no es suficiente con ser bien portados, sino que conviene ser bien portados e influenciar a los vecinos a que sean bien portados también.

Ada, satisfecha con los resultados de su análisis de la versión 1, ahora se propone analizar el comportamiento de la nueva versión, con la sospecha de que sigue realizando entregas de regalos de forma ineficiente.

## Entrada

En el primer renglón hay un entero **N** indicando el número de casas en la fila. En el siguiente renglón hay **N** enteros que indican el rating de la **i**-ésima casa.

## Salida

Un solo entero indicando la cantidad de casas que visita la estrategia de la versión 2 de GPT.

## Ejemplos

| Entrada              | Salida | Explicación                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
| -------------------- | ------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `5`<br>`1 2 3 4 5`   | `2`    | Hay 3 posibles inicios de grupos de 3 casas:<br>• 1 2 3, con suma 6<br>• 2 3 4, con suma 9<br>• 3 4 5, con suma 12<br><br>Por lo que GPT 2 se para frente a la casa de rating 4, que es la casa central del grupo con suma máxima, y ahí entrega regalos a las casas de rating 3, 4 y 5.<br><br>Después de eso, los grupos de 3 casas quedan como sigue:<br>• 1 2 _, con suma 3<br>• 2 _ _, con suma 2<br>• _ \_ \_, con suma 0<br><br>Con esto, la siguiente parada es frente a la casa con rating 2, y ahí se entregan regalos a las casas de rating 1 y 2.                                            |
| `6`<br>`1 6 2 4 3 5` | `3`    | Inicialmente los grupos (6 2 4) y (4 3 5) ambos tienen suma 12, como (6 2 4) está más a la izquierda, GPT 2 se estaciona frente a la casa de rating 2. Ahí entrega regalos a las casas del grupo.<br><br>Después quedan los siguientes posibles grupos:<br>• 1 \_ _<br>• _ \_ _, las tres casas que acaban de recibir regalos<br>• _ _ 3<br>• _ 3 5<br><br>De manera que GPT 2 se estaciona frente a la casa de rating 3 y entrega regalos ahí y en la casa de rating 5.<br><br>Finalmente, GPT 2 se estaciona frente a la casa de rating 6, para entregar regalo a la única casa restante, de rating 1. |

## Límites

- `3 ≤ N ≤ 5 × 10^4`
- `1 ≤ Ri ≤ 10^8`
- **Límite de memoria:** 32 MiB
- **Límite de tiempo:** 1.5s por caso
- **Puntos:** 100

</details>

---

<details>
<summary><h1>F. La Cadena de Villancicos</h1></summary>

## Descripción del Problema

Durante la preparación del gran concierto de invierno de Santa Clarita, necesitas generar villancicos largos a partir de pequeños patrones musicales. Sin embargo, sabes que si el patrón musical puede superponerse así mismo y dicha superposición aparece en el villancico este será muy navideño.

Tu tarea es determinar qué tan navideño es cada patrón encontrando la superposición más larga en el villancico.

## Entrada

En la primer línea un entero **n**, el número de caracteres del villancico el cual se encuentra en la segunda línea. En la tercer línea un entero **m**, el número de patrones. Finalmente las últimas **m** líneas consisten cada una por un entero **li** y una cadena la cual tendrá exactamente **li** caracteres compuestos por únicamente letras mayúsculas.

## Salida

**m** enteros separados en distintas líneas: para cada patrón **i**, el número máximo de superposiciones que este se encuentra en el villancico.

## Ejemplos

| Entrada                                        | Salida     | Explicación                                                                                                 |
| ---------------------------------------------- | ---------- | ----------------------------------------------------------------------------------------------------------- |
| `7`<br>`NAVIDAD`<br>`2`<br>`3 NAV`<br>`4 VIDA` | `1`<br>`1` | • "NAV" aparece en la posición 1 del villancico<br>• "VIDA" aparece en la posición 3 del villancico         |
| `7`<br>`ABABABA`<br>`2`<br>`3 ABA`<br>`2 BA`   | `3`<br>`1` | • "ABA" aparece 3 veces en el villancico (posiciones 1, 3 y 5)<br>• "BA" aparece 1 vez de forma superpuesta |

## Límites

- `1 ≤ n ≤ 10^5`
- `1 ≤ m ≤ 100`
- `1 ≤ li ≤ n`
- **Límite de memoria:** 64 MiB
- **Límite de tiempo:** 2.5s por caso
- **Puntos:** 100

</details>
