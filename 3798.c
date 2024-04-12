void fun()
{
  int entity_8 = 39;
  char entity_7[14] = "";
  entity_7 = NULL;
  char* entity_0;
  char* entity_3;
  char entity_5[46] = "";
  entity_5 = NULL;
  char entity_6[30] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[86-1]='';
  memset(entity_6, 'l', 30-1);
  entity_6[30-1]='';
  memset(entity_5, 'c', 46-1);
  entity_5[46-1]='';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[entity_8-1]='';
  memset(entity_7, 'G', 14-1);
  entity_7[14-1]='';
  strcpy(entity_0, entity_6);
}