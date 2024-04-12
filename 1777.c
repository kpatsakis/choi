void fun()
{
  int entity_7 = 11;
  entity_7 = 83;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  char entity_8[59] = "";
  entity_8 = NULL;
  memset(entity_4, 'l', entity_7-1);
  entity_4[entity_7-1]='';
  memset(entity_8, 's', 59-1);
  entity_8[59-1]='';
  entity_4[62] = 'v';
}