void fun()
{
  int entity_0 = 2;
  char* entity_4;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char entity_9 = 'n';
  entity_4 = (char*)malloc(7*sizeof(char));
  entity_4[7-1]='';
  memset(entity_6, 'B', entity_0-1);
  entity_6[entity_0-1]='';
  entity_0 = 41;
  strcpy(entity_4, entity_6);
}