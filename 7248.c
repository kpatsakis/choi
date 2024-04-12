void fun()
{
  int entity_2 = 73;
  int entity_5 = 35;
  entity_2 = 66;
  char entity_0[9] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_3[44] = "";
  entity_3 = NULL;
  char entity_6[3] = "";
  entity_6 = NULL;
  memset(entity_0, 'a', 9-1);
  entity_0[9-1]='';
  memset(entity_3, 'q', 44-1);
  entity_3[44-1]='';
  memset(entity_6, 'x', 3-1);
  entity_6[3-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  strcpy(entity_4, entity_3);
}