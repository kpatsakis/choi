void fun()
{
  int entity_4 = 38;
  entity_4 = 24;
  char entity_7[76] = "";
  entity_7 = NULL;
  char* entity_8;
  char entity_5[43] = "";
  entity_5 = NULL;
  char entity_0[15] = "";
  entity_0 = NULL;
  memset(entity_5, 'Y', 43-1);
  entity_5[43-1]='';
  memset(entity_7, 'h', 76-1);
  entity_7[76-1]='';
  memset(entity_0, 'N', 15-1);
  entity_0[15-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memcpy(entity_8, entity_0, 15*sizeof(char));
}