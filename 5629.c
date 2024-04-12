void fun()
{
  int entity_4 = 71;
  char entity_8[13] = "";
  entity_8 = NULL;
  char entity_5[7] = "";
  entity_5 = NULL;
  char entity_0[95] = "";
  entity_0 = NULL;
  char* entity_3;
  char entity_6 = 'S';
  memset(entity_5, 'T', 7-1);
  entity_5[7-1]='';
  memset(entity_8, 'c', 13-1);
  entity_8[13-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memset(entity_0, 'l', 95-1);
  entity_0[95-1]='';
  memcpy(entity_3, entity_8, 13*sizeof(char));
}