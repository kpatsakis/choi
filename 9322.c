void fun()
{
  int entity_5 = 59;
  char entity_4[19] = "";
  entity_4 = NULL;
  char entity_6[31] = "";
  entity_6 = NULL;
  char* entity_0;
  char entity_8 = 'S';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_6, 'z', 31-1);
  entity_6[31-1]='';
  memset(entity_4, 'u', 19-1);
  entity_4[19-1]='';
  memcpy(entity_0, entity_6, 31*sizeof(char));
}