void fun()
{
  int entity_1 = 45;
  char entity_6[4] = "";
  entity_6 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_6, 'C', 4-1);
  entity_6[4-1]='';
  memset(entity_3, 'v', entity_1-1);
  entity_3[entity_1-1]='';
  entity_1 = 36;
  entity_3[59] = 'J';
}