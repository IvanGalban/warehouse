
/*default struct*/
typedef struct {
    char provider_id[3];     // identificador del productor
    int  product_id;         // numero secuencial del productor
    char product_type[3];    // tipo de producto generado
    char product_data[4084];  // esto es solo para que todos los productos tengan 4096 bytes de tamaño 
} product;

typedef struct {
	char *type;
	int limit;
	int current;
	sem_t slots_available;
	sem_t slots_busy;
	// 1sem_t mutex;
	product *products;
} product_package;
