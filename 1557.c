void fun()
{
  int entity_1 = 41;
  char* entity_9;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[51-1]='';
  memset(entity_7, 'Z', entity_1-1);
  entity_7[entity_1-1]='';
  strcpy(entity_9, entity_7);
}