void fun()
{
  int entity_1 = 54;
  int entity_4 = 81;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_0 = 'c';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[19-1]='';
  memset(entity_9, 'S', entity_1-1);
  entity_9[entity_1-1]='';
  strcpy(entity_7, entity_9);
}