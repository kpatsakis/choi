void fun()
{
  int entity_8 = 23;
  entity_8 = 11;
  char entity_5[39] = "";
  entity_5 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_5, 'Z', 39-1);
  entity_5[39-1]='';
  strcpy(entity_9, entity_5);
}