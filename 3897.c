void fun()
{
  int entity_0 = 71;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_6;
  char entity_7 = 'y';
  memset(entity_9, 'n', entity_0-1);
  entity_9[entity_0-1]='';
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[62-1]='';
  entity_0 = 28;
  strcpy(entity_6, entity_9);
}