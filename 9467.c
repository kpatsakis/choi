void fun()
{
  int entity_8 = 14;
  entity_8 = 8;
  char* entity_5;
  char entity_2 = 'd';
  char entity_9[33] = "";
  entity_9 = NULL;
  memset(entity_9, 'V', 33-1);
  entity_9[33-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  strcpy(entity_5, entity_9);
}