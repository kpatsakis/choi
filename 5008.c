void fun()
{
  int entity_5 = 11;
  entity_5 = 44;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'l', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[20] = 'z';
}