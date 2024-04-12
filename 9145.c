void fun()
{
  int entity_3 = 49;
  entity_3 = 33;
  char* entity_0;
  char entity_8[73] = "";
  entity_8 = NULL;
  char entity_5[80] = "";
  entity_5 = NULL;
  char entity_7 = 'V';
  memset(entity_5, 'K', 80-1);
  entity_5[80-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_8, 'k', 73-1);
  entity_8[73-1]='';
  strcpy(entity_0, entity_5);
}