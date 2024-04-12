void fun()
{
  int entity_8 = 84;
  int entity_7 = 1;
  int entity_5 = 47;
  char* entity_4;
  char entity_6[83] = "";
  entity_6 = NULL;
  char entity_2[33] = "";
  entity_2 = NULL;
  memset(entity_6, 'Q', 83-1);
  entity_6[83-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_2, 'i', 33-1);
  entity_2[33-1]='';
  memcpy(entity_4, entity_6, 83*sizeof(char));
}