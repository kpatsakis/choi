void fun()
{
  int entity_6 = 27;
  char* entity_2;
  char entity_8[33] = "";
  char* entity_1;
  char entity_9[30] = "";
  memset(entity_8, 'U', 33-1);
  entity_8[33-1]='0';
  memset(entity_9, 'o', 30-1);
  entity_9[30-1]='0';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(76*sizeof(char));
  entity_1[0]='0';
  entity_6 = 56;
  memcpy(entity_2, entity_9, 30*sizeof(char));
}