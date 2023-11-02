#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct ToriiClient ToriiClient;

typedef struct FieldElement {
  uint8_t data[32];
} FieldElement;

typedef struct EntityModel {
  const char *model;
  const struct FieldElement *keys;
  uintptr_t keys_len;
} EntityModel;

typedef struct Error {
  const char *message;
} Error;

struct ToriiClient *client_new(const char *torii_url,
                               const char *rpc_url,
                               const struct FieldElement *world,
                               const struct EntityModel *entities,
                               uintptr_t entities_len,
                               struct Error *error);