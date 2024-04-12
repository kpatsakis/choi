void fun()
{
  int entity_3 = 93;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_6 = 'f';
  char entity_5[53] = "";
  entity_5 = NULL;
  memset(entity_5, 'z', 53-1);
  entity_5[53-1]='';
  entity_8 = (char*)malloc(49*sizeof(char));
  entity_8[49-1]='';
  memset(entity_4, 'c', entity_3-1);
  entity_4[entity_3-1]='';
  memcpy(entity_8, entity_4, entity_3*sizeof(char));
}