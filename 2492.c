void fun()
{
  char* entity_1;
  char entity_0[86] = "";
  entity_0 = NULL;
  char entity_7[12] = "";
  entity_7 = NULL;
  char entity_4[98] = "";
  entity_4 = NULL;
  memset(entity_7, 'm', 12-1);
  entity_7[12-1]='';
  memset(entity_0, 'E', 86-1);
  entity_0[86-1]='';
  entity_1 = (char*)malloc(11*sizeof(char));
  entity_1[11-1]='';
  memset(entity_4, 'T', 98-1);
  entity_4[98-1]='';
  strcpy(entity_1, entity_7);
}