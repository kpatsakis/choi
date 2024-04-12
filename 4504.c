void fun()
{
  int entity_0 = 87;
  entity_0 = 87;
  char* entity_6;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(8*sizeof(char));
  entity_6[8-1]='';
  memset(entity_9, 'V', entity_0-1);
  entity_9[entity_0-1]='';
  strcpy(entity_6, entity_9);
}