void fun()
{
  int entity_4 = 72;
  char* entity_8;
  char entity_3[86] = "";
  char entity_5[entity_4] = "";
  char entity_6 = 'U';
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'L', 86-1);
  entity_3[86-1]='0';
  memset(entity_5, 'Q', entity_4-1);
  entity_5[entity_4-1]='0';
  entity_4 = 14;
  memcpy(entity_8, entity_5, entity_4*sizeof(char));
}