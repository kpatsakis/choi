void fun()
{
  int entity_0 = 93;
  entity_0 = 41;
  char entity_1[55] = "";
  char* entity_9;
  char* entity_8;
  char entity_3[64] = "";
  memset(entity_1, 'u', 55-1);
  entity_1[55-1]='0';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 'm', 64-1);
  entity_3[64-1]='0';
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_9, entity_3, 64*sizeof(char));
}