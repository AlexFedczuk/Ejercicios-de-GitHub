
/** \brief Esta funcion se encarga simplemente de solicitar al usuario
 una cadena de caracteres(Por ej: nombre, apellido, etc).
 *
 * \param cadena[] char. Este parametro sera el que se cargara con la
 cadena de caracteres que halla ingresado el usuario.
 * \param buffer int. La cantidad de caracteres que COMO MUCHO
 puede ocupar el string.
 * \param mensaje[] char. El mensaje que se le comunicara al usuario
 para instruirlo.
 * \return void
 *
 */
void PedirUnaCadena(char cadena[], int buffer, char mensaje[]);

/** \brief Esta funcion se ocupa de la primera parte de formalizar
un nombre y apellido, se ocupa de CONCATENAR 'apellido, nombre' y
pasar todo a minuscula.
 *
 * \param apellidoNombre[] char. El array donde se cargara el apellido
 y nombre concatenado.
 * \param apellido[] char. El apellido a procesar.
 * \param nombre[] char. El nombre a procesar.
 * \return void
 *
 */
void FormalizarApellidoNombreParte1(char apellidoNombre[], char apellido[], char nombre[]);

/** \brief Esta funcion se encarga de finalizar la formalizacion del
'apellido, nombre', dejando la primera letra del apellido/nombre con
mayuscula y el resto minuscula.
 *
 * \param buffer int. La cantidad de caracteres que puede ocupar
 COMO MUCHO el string
 * \param apellidoNombre[] char. El 'apellido, nombre' a terminar
de procesar
 * \return void
 *
 */
void FormalizarApellidoNombreParte2(int buffer, char apellidoNombre[]);

/** \brief Pedir un numero ENTERO al usuario.
 *
 * \param mensaje[] char. El mensaje a instruir al usuario.
 * \return int. El numero ingresado por el usuario.
 *
 */
int PedirNumeroEntero(char mensaje[]);

/** \brief Calcular el numero MAXIMO de un ARRAY
 *
 * \param vector[] int. El ARRAY a analizar.
 * \param tam int. El tamanio del ARRAY.
 * \return int. El numero MAXIMO.
 *
 */
int CalcularNumeroMaximo(int vector[], int tam);

/** \brief Calcular el numero MINIMO de un ARRAY
 *
 * \param vector[] int. El ARRAY a analizar.
 * \param tam int. El tamanio del ARRAY.
 * \return int. El numero MINIMO.
 *
 */
int CalcularNumeroMinimo(int vector[], int tam);

/** \brief Acumular todos los elementos(numeros) del ARRAY
 *
 * \param vector[] int. El ARRAY a analizar.
 * \param tam int. El tamanio del ARRAY.
 * \return int. El TOTAL de numeros ACUMULADOS.
 *
 */
int AcumularNumeros(int vector[], int tam);

/** \brief Calcular el PROMEDIO de una serie de numeros.
 *
 * \param total int. El Total de los elementos.
 * \param unidades int. Las unidades de elemetos.
 * \return float. El PROMEDIO calculado de ese total.
 *
 */
float CalcularPromedio(int total, int unidades);

/** \brief Mustra los valores(numeros) guardados con sus
indices correspondientes.
 *
 * \param vector[] int. El array a mostrar.
 * \param tam int. El tamanio del array.
 * \return void
 *
 */
void MostrarArrayNumerosYIndices(int vector[], int tam);

/** \brief Modifica UN valor(numero ENTERO) en el
ARRAY a trabajar, el usuario ingresado el nuevo valor.
 *
 * \param vector[] int. El array a trabajar.
 * \param tam int. El tamanio del array.
 * \param numeroSeleccionado int. El numero a remplazar
 por solicitud del USUARIO.
 * \return void
 *
 */
void ModificarNumeroArray(int vector[], int tam, int numeroSeleccionado);
