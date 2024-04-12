void fun()
{
  int entity_0 = 11;
  char entity_1[97] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_4[24] = "";
  entity_4 = NULL;
  char entity_5[60] = "";
  entity_5 = NULL;
  char entity_6 = 'z';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_5, 'N', 60-1);
  entity_5[60-1]='';
  memset(entity_4, 'b', 24-1);
  entity_4[24-1]='';
  memset(entity_1, 'q', 97-1);
  entity_1[97-1]='';
  entity_0 = 26;
  memcpy(entity_7, entity_4, 24*sizeof(char));
}