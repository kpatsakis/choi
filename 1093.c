void fun()
{
  int entity_3 = 99;
  char* entity_0;
  char* entity_5;
  char entity_4[14] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_7[57] = "";
  entity_7 = NULL;
  memset(entity_7, 'n', 57-1);
  entity_7[57-1]='';
  entity_5 = (char*)malloc(98*sizeof(char));
  entity_5[98-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  entity_8 = (char*)malloc(95*sizeof(char));
  entity_8[95-1]='';
  memset(entity_4, 'U', 14-1);
  entity_4[14-1]='';
  entity_3 = 28;
  strcpy(entity_0, entity_4);
}