void fun()
{
  int entity_1 = 83;
  int entity_0 = 65;
  entity_0 = 65;
  char* entity_5;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'O', entity_0-1);
  entity_9[entity_0-1]='';
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[83-1]='';
  strcpy(entity_5, entity_9);
}