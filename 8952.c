void fun()
{
  int entity_3 = 69;
  char entity_5[98] = "";
  entity_5 = NULL;
  char entity_4[22] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_5, 'Q', 98-1);
  entity_5[98-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_4, 'h', 22-1);
  entity_4[22-1]='';
  memcpy(entity_8, entity_5, 98*sizeof(char));
}