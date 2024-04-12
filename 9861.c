void fun()
{
  int entity_0 = 20;
  entity_0 = 20;
  char* entity_5;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memset(entity_9, 'e', entity_0-1);
  entity_9[entity_0-1]='';
  strcpy(entity_5, entity_9);
}