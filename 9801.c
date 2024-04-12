void fun()
{
  int entity_2 = 45;
  int entity_6 = 79;
  char entity_1 = 'w';
  char entity_7[58] = "";
  entity_7 = NULL;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_7, 'R', 58-1);
  entity_7[58-1]='';
  memset(entity_0, 'H', entity_2-1);
  entity_0[entity_2-1]='';
  entity_0[7] = 'J';
}