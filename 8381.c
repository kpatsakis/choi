void fun()
{
  int entity_6 = 76;
  char entity_3[36] = "";
  entity_3 = NULL;
  char entity_1[57] = "";
  entity_1 = NULL;
  char entity_8[19] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_3, 'K', 36-1);
  entity_3[36-1]='';
  memset(entity_1, 'T', 57-1);
  entity_1[57-1]='';
  entity_7 = (char*)malloc(60*sizeof(char));
  entity_7[60-1]='';
  memset(entity_8, 'L', 19-1);
  entity_8[19-1]='';
  strcpy(entity_7, entity_8);
}