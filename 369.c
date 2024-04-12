void fun()
{
  char entity_7[26] = "";
  entity_7 = NULL;
  char entity_0[39] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_4[6] = "";
  entity_4 = NULL;
  char entity_9[86] = "";
  entity_9 = NULL;
  memset(entity_9, 'a', 86-1);
  entity_9[86-1]='';
  memset(entity_0, 't', 39-1);
  entity_0[39-1]='';
  entity_1 = (char*)malloc(88*sizeof(char));
  entity_1[88-1]='';
  memset(entity_7, 'R', 26-1);
  entity_7[26-1]='';
  memset(entity_4, 'M', 6-1);
  entity_4[6-1]='';
  strcpy(entity_1, entity_9);
}