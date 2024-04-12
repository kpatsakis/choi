void fun()
{
  int entity_9 = 26;
  char entity_8[89] = "";
  entity_8 = NULL;
  memset(entity_8, 'B', 89-1);
  entity_8[89-1]='';
  entity_8[entity_9] = 'a';
}