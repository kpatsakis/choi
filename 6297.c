void fun()
{
  int entity_7 = 63;
  char entity_2[48] = "";
  entity_2 = NULL;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  memset(entity_2, 'n', 48-1);
  entity_2[48-1]='';
  memset(entity_5, 'H', entity_7-1);
  entity_5[entity_7-1]='';
  entity_7 = 19;
  entity_5[22] = 'k';
}