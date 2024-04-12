void fun()
{
  int entity_0 = 77;
  char entity_8[86] = "";
  char* entity_2;
  char entity_7[62] = "";
  char entity_5[32] = "";
  char* entity_1;
  memset(entity_7, 'c', 62-1);
  entity_7[62-1]='0';
  memset(entity_5, 'R', 32-1);
  entity_5[32-1]='0';
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'G', 86-1);
  entity_8[86-1]='0';
  strcpy(entity_1, entity_8);
}