void fun()
{
  int entity_8 = 72;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  char* entity_9;
  char entity_3[51] = "";
  entity_3 = NULL;
  memset(entity_3, 'L', 51-1);
  entity_3[51-1]='';
  memset(entity_0, 'i', entity_8-1);
  entity_0[entity_8-1]='';
  entity_9 = (char*)malloc(30*sizeof(char));
  entity_9[30-1]='';
  strcpy(entity_9, entity_0);
}