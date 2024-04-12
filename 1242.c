void fun()
{
  int entity_5 = 32;
  entity_5 = 11;
  char entity_4[27] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  memset(entity_4, 'h', 27-1);
  entity_4[27-1]='';
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[6-1]='';
  memset(entity_9, 'K', entity_5-1);
  entity_9[entity_5-1]='';
  entity_9[32] = 'U';
}