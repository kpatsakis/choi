void fun()
{
  int entity_0 = 5;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  memset(entity_5, 'B', entity_0-1);
  entity_5[entity_0-1]='';
  entity_5[3] = 'K';
}