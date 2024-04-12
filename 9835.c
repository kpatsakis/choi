void fun()
{
  int entity_8 = 26;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_6[75] = "";
  entity_6 = NULL;
  char entity_5[60] = "";
  entity_5 = NULL;
  memset(entity_6, 'e', 75-1);
  entity_6[75-1]='';
  memset(entity_5, 'a', 60-1);
  entity_5[60-1]='';
  memset(entity_4, 'k', entity_8-1);
  entity_4[entity_8-1]='';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[21-1]='';
  strcpy(entity_0, entity_4);
}