void fun()
{
  int entity_7 = 63;
  entity_7 = 19;
  char* entity_8;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char entity_6[33] = "";
  entity_6 = NULL;
  memset(entity_3, 'c', entity_7-1);
  entity_3[entity_7-1]='';
  memset(entity_6, 'H', 33-1);
  entity_6[33-1]='';
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[73-1]='';
  memcpy(entity_8, entity_3, entity_7*sizeof(char));
}