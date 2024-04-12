void fun()
{
  int entity_3 = 22;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_1[98] = "";
  entity_1 = NULL;
  char entity_8 = 'M';
  char entity_2 = 'e';
  memset(entity_1, 'U', 98-1);
  entity_1[98-1]='';
  entity_0 = (char*)malloc(66*sizeof(char));
  entity_0[66-1]='';
  memset(entity_4, 't', entity_3-1);
  entity_4[entity_3-1]='';
  entity_3 = 95;
  strcpy(entity_0, entity_4);
}