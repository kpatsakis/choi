void fun()
{
  int entity_6 = 7;
  char entity_9[72] = "";
  entity_9 = NULL;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  char* entity_2;
  memset(entity_9, 'n', 72-1);
  entity_9[72-1]='';
  entity_2 = (char*)malloc(55*sizeof(char));
  entity_2[55-1]='';
  memset(entity_8, 'A', entity_6-1);
  entity_8[entity_6-1]='';
  strcpy(entity_2, entity_8);
}