void fun()
{
  int entity_6 = 39;
  char entity_8[23] = "";
  entity_8 = NULL;
  char entity_1[15] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 's', 15-1);
  entity_1[15-1]='';
  memset(entity_8, 'n', 23-1);
  entity_8[23-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  entity_6 = 43;
  strcpy(entity_0, entity_1);
}