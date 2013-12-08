#ifndef __RUPIN_H__
#define __RUPIN_H__

#include <stdint.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <sys/time.h>
#include <stddef.h>
#include "../include/RF24.h"
#include "../include/RF24Network.h"

class RF24;

class RuPin
{
public:
  /**
   * Construct the network
   *
   *
   */
  RuPin();

 
protected:
  

private:
  RF24& radio; /**< Underlying radio driver, provides link/physical layers */ 
};

#endif // __RUPIN_H__