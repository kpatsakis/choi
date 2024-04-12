void fun()
{
  int entity_5 = 90;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'e', entity_5-1);
  entity_8[entity_5-1]='';
  entity_8[1] = 'K';
}