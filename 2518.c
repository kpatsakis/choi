void fun()
{
  int entity_2 = 75;
  int entity_3 = 33;
  char* entity_1;
  char entity_5[64] = "";
  entity_5 = NULL;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  memset(entity_5, 'u', 64-1);
  entity_5[64-1]='';
  entity_1 = (char*)malloc(41*sizeof(char));
  entity_1[41-1]='';
  memset(entity_0, 'U', entity_3-1);
  entity_0[entity_3-1]='';
  entity_3 = 54;
  strcpy(entity_1, entity_0);
}