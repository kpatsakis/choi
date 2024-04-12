void fun()
{
  int entity_2 = 23;
  char entity_4[97] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_7[96] = "";
  entity_7 = NULL;
  char entity_6[18] = "";
  entity_6 = NULL;
  char entity_5 = 'b';
  memset(entity_4, 'U', 97-1);
  entity_4[97-1]='';
  memset(entity_6, 'V', 18-1);
  entity_6[18-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_7, 'F', 96-1);
  entity_7[96-1]='';
  entity_2 = 42;
  memcpy(entity_0, entity_6, 18*sizeof(char));
}