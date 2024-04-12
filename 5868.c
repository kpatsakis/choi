void fun()
{
  int entity_3 = 55;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char entity_6[73] = "";
  entity_6 = NULL;
  char* entity_9;
  char entity_0[13] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(37*sizeof(char));
  entity_5[37-1]='';
  memset(entity_4, 'G', entity_3-1);
  entity_4[entity_3-1]='';
  memset(entity_0, 'f', 13-1);
  entity_0[13-1]='';
  memset(entity_6, 'g', 73-1);
  entity_6[73-1]='';
  entity_9 = (char*)malloc(12*sizeof(char));
  entity_9[12-1]='';
  strcpy(entity_5, entity_4);
}