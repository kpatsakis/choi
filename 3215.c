void fun()
{
  int entity_1 = 8;
  char entity_0[34] = "";
  entity_0 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_4 = 'p';
  char* entity_5;
  entity_5 = (char*)malloc(81*sizeof(char));
  entity_5[81-1]='';
  memset(entity_3, 'K', entity_1-1);
  entity_3[entity_1-1]='';
  memset(entity_0, 'v', 34-1);
  entity_0[34-1]='';
  entity_1 = 91;
  memcpy(entity_5, entity_3, entity_1*sizeof(char));
}