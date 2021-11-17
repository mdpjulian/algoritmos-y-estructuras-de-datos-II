#include "../ext/googletest/googletest/include/gtest/gtest.h"
#include "drone.h"

TEST(Despegue, Prueba1)
{
    EXPECT_EQ(0,despegar());
    
}
TEST(Aterrizar, Prueba2)
{
    EXPECT_EQ(1,aterrizar());
    
}

TEST(Paquete, PruebaDescarga)
{
    EXPECT_EQ(0,descargarPaquete());
    
}

TEST(Paquete, PruebaNotificar)
{
    EXPECT_EQ(0,notificar());
    
}
