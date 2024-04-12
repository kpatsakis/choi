void fun()
{
  int entity_5 = 63;
  char entity_6[48] = "";
  entity_6 = NULL;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char entity_7[83] = "";
  entity_7 = NULL;
  memset(entity_7, 'x', 83-1);
  entity_7[83-1]='';
  memset(entity_6, 'E', 48-1);
  entity_6[48-1]='';
  memset(entity_4, 'k', entity_5-1);
  entity_4[entity_5-1]='';
  entity_4[92] = 'S';
}