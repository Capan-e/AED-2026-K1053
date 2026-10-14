//Creando estructura básica para los structs de los trenes y plataforma


struct Locomotora {
    int id;
    bool disponible;
    double potencia; // Opcional para cálculo de carga
};

struct Vagon {
    int id;
    std::string tipo; // "Carga" o "Pasajeros"
    double capacidad; // Toneladas o pasajeros
    bool disponible;
};


struct Formacion {
    int idFormacion;
    std::string tipoServicio; // "Carga" o "Pasajeros"
    Locomotora locomotora;
    std::vector<Vagon> vagones;
    std::string estado; // "En Cabecera", "En Viaje", "Cargando/Descargando"
};


struct Servicio {
    int idServicio;
    std::string tipoServicio; // "Carga" o "Pasajeros"
    double tiempoRecorridoHoras;
    double tiempoOperativoHoras; // Carga/descarga o ajuste de vagones
    Formacion formacionAsignada;
    std::string horaSalida;
    std::string horaLlegada;
};
