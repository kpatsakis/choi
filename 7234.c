void fun()
{
  int entity_1 = 10;
  entity_1 = 37;
  char* entity_0;
  char entity_6[50] = "";
  entity_6 = NULL;
  char entity_5[3] = "";
  entity_5 = NULL;
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_5, 'P', 3-1);
  entity_5[3-1]='';
  memset(entity_6, 'M', 50-1);
  entity_6[50-1]='';
  strcpy(entity_0, entity_6);
}