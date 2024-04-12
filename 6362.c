void fun()
{
  int entity_6 = 87;
  entity_6 = 87;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char entity_3[36] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  memset(entity_0, 'G', entity_6-1);
  entity_0[entity_6-1]='';
  memset(entity_3, 'W', 36-1);
  entity_3[36-1]='';
  strcpy(entity_1, entity_0);
}