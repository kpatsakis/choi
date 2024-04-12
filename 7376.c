void fun()
{
  int entity_6 = 55;
  char entity_4[86] = "";
  entity_4 = NULL;
  char entity_5[72] = "";
  entity_5 = NULL;
  char* entity_0;
  memset(entity_4, 'p', 86-1);
  entity_4[86-1]='';
  memset(entity_5, 'A', 72-1);
  entity_5[72-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  strcpy(entity_0, entity_4);
}