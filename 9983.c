void fun()
{
  int entity_7 = 50;
  entity_7 = 15;
  char entity_5[56] = "";
  entity_5 = NULL;
  memset(entity_5, 'i', 56-1);
  entity_5[56-1]='';
  entity_5[entity_7] = 't';
}