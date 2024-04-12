void fun()
{
  int entity_6 = 83;
  int entity_8 = 25;
  int entity_9 = 33;
  int entity_1 = 78;
  char* entity_7;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  memset(entity_4, 'H', entity_9-1);
  entity_4[entity_9-1]='';
  entity_7 = (char*)malloc(29*sizeof(char));
  entity_7[29-1]='';
  strcpy(entity_7, entity_4);
}