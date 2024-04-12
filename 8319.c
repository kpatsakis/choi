void fun()
{
  int entity_2 = 87;
  char entity_4[83] = "";
  entity_4 = NULL;
  char* entity_9;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  entity_9 = (char*)malloc(58*sizeof(char));
  entity_9[58-1]='';
  memset(entity_0, 'f', entity_2-1);
  entity_0[entity_2-1]='';
  memset(entity_4, 'F', 83-1);
  entity_4[83-1]='';
  strcpy(entity_9, entity_0);
}