void fun()
{
  int entity_7 = 82;
  entity_7 = 80;
  char entity_4[4] = "";
  entity_4 = NULL;
  char entity_8 = 'p';
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_4, 'R', 4-1);
  entity_4[4-1]='';
  memset(entity_3, 'W', entity_7-1);
  entity_3[entity_7-1]='';
  entity_3[85] = 'J';
}