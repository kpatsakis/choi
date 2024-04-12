void fun()
{
  int entity_5 = 26;
  int entity_3 = 65;
  char entity_4[89] = "";
  entity_4 = NULL;
  memset(entity_4, 'e', 89-1);
  entity_4[89-1]='';
  entity_4[entity_5] = 'p';
}