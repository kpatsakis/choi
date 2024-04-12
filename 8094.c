void fun()
{
  int entity_6 = 84;
  char* entity_5;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_3[44] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(38*sizeof(char));
  entity_1[38-1]='';
  memset(entity_3, 'D', 44-1);
  entity_3[44-1]='';
  memset(entity_0, 'm', entity_6-1);
  entity_0[entity_6-1]='';
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  strcpy(entity_1, entity_0);
}