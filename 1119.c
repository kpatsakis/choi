void fun()
{
  int entity_8 = 3;
  int entity_4 = 75;
  char entity_1 = 'S';
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_7, 'H', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[43] = 'T';
}