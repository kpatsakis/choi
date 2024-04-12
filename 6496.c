void fun()
{
  int entity_6 = 82;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char entity_5[80] = "";
  entity_5 = NULL;
  memset(entity_5, 'X', 80-1);
  entity_5[80-1]='';
  memset(entity_4, 'e', entity_6-1);
  entity_4[entity_6-1]='';
  entity_4[53] = 'r';
}