void fun()
{
  int entity_4 = 65;
  char* entity_7;
  char entity_9[81] = "";
  entity_9 = NULL;
  char entity_3 = 'h';
  memset(entity_9, 'c', 81-1);
  entity_9[81-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  entity_4 = 33;
  strcpy(entity_7, entity_9);
}