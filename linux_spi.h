#ifndef LINUX_SPI_H
#define LINUX_SPI_H





class Linux_SPI
{    

    public:


        enum SPI_Error{

            ERROR_DEV_NOT_OPEN,
            ERROR_CANT_OPEN_DEV,
            ERROR_CANT_SET_MODE,
            ERROR_CANT_GET_MODE,
            ERROR_CANT_SET_BITS,
            ERROR_CANT_GET_BITS,
            ERROR_CANT_SET_SPEED,
            ERROR_CANT_GET_SPEED,
            ERROR_BAD_PARAM,
            ERROR_CANT_READ,
            ERROR_CANT_WRITE,
            ERROR_CANT_SEND_TR
        };


         Linux_SPI();
        ~Linux_SPI();


};





#endif // LINUX_SPI_H