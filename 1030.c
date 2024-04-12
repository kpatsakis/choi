void fun()
{
  int entity_6 = 14;
  entity_6 = 74;
  char entity_7[3] = "";
  entity_7 = NULL;
  char entity_4[24] = "";
  entity_4 = NULL;
  char entity_8[4] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'A', 4-1);
  entity_8[4-1]='';
  entity_0 = (char*)malloc(entity_6*sizeof(char));
  entity_0[entity_6-1]='';
  memset(entity_7, 'x', 3-1);
  entity_7[3-1]='';
  memset(entity_4, 'w', 24-1);
  entity_4[24-1]='';
  memcpy(entity_0, entity_4, 24*sizeof(char));
}