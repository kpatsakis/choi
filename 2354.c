void fun()
{
  int entity_5 = 21;
  char entity_6[29] = "";
  entity_6 = NULL;
  char* entity_0;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_4[61] = "";
  entity_4 = NULL;
  memset(entity_6, 'G', 29-1);
  entity_6[29-1]='';
  entity_0 = (char*)malloc(4*sizeof(char));
  entity_0[4-1]='';
  memset(entity_4, 's', 61-1);
  entity_4[61-1]='';
  memset(entity_3, 'x', entity_5-1);
  entity_3[entity_5-1]='';
  strcpy(entity_0, entity_3);
}