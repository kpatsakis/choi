void fun()
{
  int entity_3 = 93;
  entity_3 = 93;
  char* entity_9;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(29*sizeof(char));
  entity_9[29-1]='';
  memset(entity_1, 'P', entity_3-1);
  entity_1[entity_3-1]='';
  strcpy(entity_9, entity_1);
}