void fun()
{
  int entity_7 = 77;
  char* entity_0;
  char entity_1 = 'c';
  char entity_4[7] = "";
  entity_4 = NULL;
  char entity_2[14] = "";
  entity_2 = NULL;
  memset(entity_4, 'M', 7-1);
  entity_4[7-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_2, 's', 14-1);
  entity_2[14-1]='';
  strcpy(entity_0, entity_4);
}