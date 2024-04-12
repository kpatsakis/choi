void fun()
{
  int entity_8 = 72;
  char entity_4[93] = "";
  entity_4 = NULL;
  memset(entity_4, 'q', 93-1);
  entity_4[93-1]='';
  entity_4[entity_8] = 'h';
}