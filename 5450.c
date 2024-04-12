void fun()
{
  int entity_7 = 13;
  char* entity_3;
  char entity_1[36] = "";
  entity_1 = NULL;
  char entity_4[58] = "";
  entity_4 = NULL;
  char entity_5[91] = "";
  entity_5 = NULL;
  char entity_0[39] = "";
  entity_0 = NULL;
  memset(entity_5, 'N', 91-1);
  entity_5[91-1]='';
  memset(entity_0, 'f', 39-1);
  entity_0[39-1]='';
  memset(entity_1, 'D', 36-1);
  entity_1[36-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_4, 'e', 58-1);
  entity_4[58-1]='';
  strcpy(entity_3, entity_4);
}