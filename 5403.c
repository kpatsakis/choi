void fun()
{
  int entity_8 = 18;
  int entity_5 = 27;
  int entity_4 = 39;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'Y', entity_5-1);
  entity_2[entity_5-1]='';
  entity_5 = 9;
  entity_2[80] = 'j';
}