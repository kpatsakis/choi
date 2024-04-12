void fun()
{
  int entity_6 = 77;
  char* entity_0;
  char entity_9[20] = "";
  entity_9 = NULL;
  char entity_8 = 'T';
  char entity_5[51] = "";
  entity_5 = NULL;
  memset(entity_9, 'U', 20-1);
  entity_9[20-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_5, 'E', 51-1);
  entity_5[51-1]='';
  memcpy(entity_0, entity_5, 51*sizeof(char));
}