void fun()
{
  int entity_5 = 22;
  entity_5 = 22;
  char entity_0[51] = "";
  entity_0 = NULL;
  char* entity_9;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(8*sizeof(char));
  entity_9[8-1]='';
  memset(entity_3, 'u', entity_5-1);
  entity_3[entity_5-1]='';
  memset(entity_0, 'C', 51-1);
  entity_0[51-1]='';
  strcpy(entity_9, entity_3);
}