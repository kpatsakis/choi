void fun()
{
  int entity_0 = 9;
  char entity_8 = 'B';
  char entity_1[87] = "";
  entity_1 = NULL;
  char entity_5[81] = "";
  entity_5 = NULL;
  char* entity_4;
  char* entity_6;
  memset(entity_5, 'Y', 81-1);
  entity_5[81-1]='';
  entity_4 = (char*)malloc(51*sizeof(char));
  entity_4[51-1]='';
  memset(entity_1, 'l', 87-1);
  entity_1[87-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  entity_0 = 99;
  strcpy(entity_6, entity_5);
}