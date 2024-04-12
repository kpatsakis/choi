void fun()
{
  int entity_9 = 26;
  entity_9 = 42;
  char entity_8[18] = "";
  entity_8 = NULL;
  memset(entity_8, 'R', 18-1);
  entity_8[18-1]='';
  entity_8[entity_9] = 'z';
}