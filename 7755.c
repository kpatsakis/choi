void fun()
{
  int entity_4 = 2;
  char* entity_5;
  char entity_9[20] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', 20-1);
  entity_9[20-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  strcpy(entity_5, entity_9);
}