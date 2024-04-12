void fun()
{
  char* entity_7;
  char entity_0[97] = "";
  entity_0 = NULL;
  char entity_6[21] = "";
  entity_6 = NULL;
  memset(entity_6, 'W', 21-1);
  entity_6[21-1]='';
  memset(entity_0, 'P', 97-1);
  entity_0[97-1]='';
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[33-1]='';
  memcpy(entity_7, entity_6, 21*sizeof(char));
}