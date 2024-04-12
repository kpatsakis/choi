void fun()
{
  int entity_8 = 97;
  char entity_5[55] = "";
  entity_5 = NULL;
  char entity_7[28] = "";
  entity_7 = NULL;
  char* entity_0;
  memset(entity_5, 'X', 55-1);
  entity_5[55-1]='';
  memset(entity_7, 'E', 28-1);
  entity_7[28-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  strcpy(entity_0, entity_5);
}