void fun()
{
  int entity_4 = 41;
  int entity_9 = 77;
  entity_4 = 100;
  char entity_2[28] = "";
  entity_2 = NULL;
  char entity_0[96] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memset(entity_2, 'v', 28-1);
  entity_2[28-1]='';
  memset(entity_0, 'v', 96-1);
  entity_0[96-1]='';
  strcpy(entity_5, entity_0);
}