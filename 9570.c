void fun()
{
  int entity_1 = 75;
  entity_1 = 76;
  char entity_0[38] = "";
  entity_0 = NULL;
  char entity_6[28] = "";
  entity_6 = NULL;
  char* entity_9;
  memset(entity_6, 'T', 28-1);
  entity_6[28-1]='';
  memset(entity_0, 'n', 38-1);
  entity_0[38-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  strcpy(entity_9, entity_0);
}