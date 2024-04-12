void fun()
{
  int entity_1 = 93;
  int entity_5 = 12;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char* entity_9;
  char entity_7 = 'u';
  entity_9 = (char*)malloc(85*sizeof(char));
  entity_9[85-1]='';
  memset(entity_6, 'S', entity_5-1);
  entity_6[entity_5-1]='';
  entity_5 = 78;
  strcpy(entity_9, entity_6);
}