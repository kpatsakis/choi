void fun()
{
  int entity_9 = 33;
  char* entity_6;
  char entity_0[52] = "";
  entity_0 = NULL;
  char entity_5[86] = "";
  entity_5 = NULL;
  memset(entity_0, 'K', 52-1);
  entity_0[52-1]='';
  memset(entity_5, 'a', 86-1);
  entity_5[86-1]='';
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[38-1]='';
  strcpy(entity_6, entity_0);
}