void fun()
{
  int entity_5 = 87;
  int entity_3 = 76;
  entity_5 = 21;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'H', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[17] = 'O';
}