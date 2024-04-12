void fun()
{
  int entity_5 = 27;
  entity_5 = 20;
  char entity_6[11] = "";
  entity_6 = NULL;
  char* entity_7;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  char entity_2[35] = "";
  entity_2 = NULL;
  char entity_0[57] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[37-1]='';
  memset(entity_0, 'R', 57-1);
  entity_0[57-1]='';
  memset(entity_2, 'm', 35-1);
  entity_2[35-1]='';
  memset(entity_6, 'l', 11-1);
  entity_6[11-1]='';
  memset(entity_8, 'U', entity_5-1);
  entity_8[entity_5-1]='';
  memcpy(entity_7, entity_8, entity_5*sizeof(char));
}