void fun()
{
  int entity_3 = 8;
  char* entity_4;
  char entity_6[55] = "";
  entity_6 = NULL;
  char entity_1[42] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_1, 'B', 42-1);
  entity_1[42-1]='';
  memset(entity_6, 'i', 55-1);
  entity_6[55-1]='';
  strcpy(entity_4, entity_1);
}