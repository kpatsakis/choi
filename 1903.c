void fun()
{
  int entity_8 = 26;
  entity_8 = 99;
  char* entity_6;
  char entity_0[90] = "";
  entity_0 = NULL;
  char entity_2[30] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_4[64] = "";
  entity_4 = NULL;
  memset(entity_2, 'U', 30-1);
  entity_2[30-1]='';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_4, 'P', 64-1);
  entity_4[64-1]='';
  memset(entity_0, 'H', 90-1);
  entity_0[90-1]='';
  strcpy(entity_6, entity_4);
}