void fun()
{
  int entity_1 = 4;
  char* entity_3;
  char entity_7[64] = "";
  char entity_5 = 'V';
  char entity_8[28] = "";
  memset(entity_8, 'k', 28-1);
  entity_8[28-1]='0';
  memset(entity_7, 'q', 64-1);
  entity_7[64-1]='0';
  entity_3 = (char*)malloc(79*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_7, 64*sizeof(char));
}