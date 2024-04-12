void fun()
{
  int entity_1 = 98;
  char* entity_3;
  char entity_6[9] = "";
  entity_6 = NULL;
  char entity_0[4] = "";
  entity_0 = NULL;
  memset(entity_0, 'U', 4-1);
  entity_0[4-1]='';
  memset(entity_6, 'K', 9-1);
  entity_6[9-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  strcpy(entity_3, entity_0);
}