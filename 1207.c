void fun()
{
  int entity_1 = 95;
  int entity_4 = 81;
  entity_1 = 95;
  char entity_6[81] = "";
  entity_6 = NULL;
  char* entity_2;
  char* entity_3;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  memset(entity_6, 'O', 81-1);
  entity_6[81-1]='';
  entity_2 = (char*)malloc(38*sizeof(char));
  entity_2[38-1]='';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[58-1]='';
  memset(entity_8, 'U', entity_1-1);
  entity_8[entity_1-1]='';
  strcpy(entity_2, entity_8);
}