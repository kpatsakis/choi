void fun()
{
  int entity_3 = 62;
  char* entity_7;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char entity_0[86] = "";
  entity_0 = NULL;
  memset(entity_0, 'L', 86-1);
  entity_0[86-1]='';
  entity_7 = (char*)malloc(21*sizeof(char));
  entity_7[21-1]='';
  memset(entity_6, 'h', entity_3-1);
  entity_6[entity_3-1]='';
  strcpy(entity_7, entity_6);
}