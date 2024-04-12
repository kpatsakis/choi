void fun()
{
  int entity_2 = 39;
  entity_2 = 39;
  char entity_8 = 's';
  char* entity_5;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'l', entity_2-1);
  entity_9[entity_2-1]='';
  entity_5 = (char*)malloc(2*sizeof(char));
  entity_5[2-1]='';
  strcpy(entity_5, entity_9);
}