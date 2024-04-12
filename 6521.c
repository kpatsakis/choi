void fun()
{
  int entity_5 = 58;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'z', entity_5-1);
  entity_7[entity_5-1]='';
  entity_7[40] = 'x';
}