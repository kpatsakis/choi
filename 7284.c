void fun()
{
  int entity_3 = 41;
  char entity_6[97] = "";
  entity_6 = NULL;
  char entity_1[49] = "";
  entity_1 = NULL;
  char* entity_4;
  char entity_5 = 'q';
  memset(entity_1, 'I', 49-1);
  entity_1[49-1]='';
  memset(entity_6, 'R', 97-1);
  entity_6[97-1]='';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memcpy(entity_4, entity_1, 49*sizeof(char));
}