#include <stdint.h>
#include <stdlib.h>

#include <grub/types.h>

#define GRUB_MODULE_VERIFY_SUPPORTS_REL 1
#define GRUB_MODULE_VERIFY_SUPPORTS_RELA 2

struct grub_module_verifier_arch {
  const char *name;
  int voidp_sizeof;
  int bigendian;
  int machine;
  int flags;
  const int *supported_relocations;
  const int *short_relocations;
};

void grub_module_verify64(void *module_img, size_t module_size, const struct grub_module_verifier_arch *arch);
void grub_module_verify32(void *module_img, size_t module_size, const struct grub_module_verifier_arch *arch);
