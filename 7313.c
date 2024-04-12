void fun()
{
  int entity_5 = 31;
  char* entity_9;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char entity_0[54] = "";
  entity_0 = NULL;
  memset(entity_0, 'G', 54-1);
  entity_0[54-1]='';
  memset(entity_6, 'U', entity_5-1);
  entity_6[entity_5-1]='';
  entity_9 = (char*)malloc(45*sizeof(char));
  entity_9[45-1]='';
  entity_5 = 3;
  entity_6[43] = 'n';
}