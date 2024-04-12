void fun()
{
  int entity_0 = 43;
  entity_0 = 28;
  char entity_5[8] = "";
  entity_5 = NULL;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char entity_2 = 'e';
  memset(entity_5, 'c', 8-1);
  entity_5[8-1]='';
  memset(entity_4, 'l', entity_0-1);
  entity_4[entity_0-1]='';
  entity_4[15] = 'N';
}