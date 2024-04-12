void fun()
{
  int entity_8 = 64;
  char entity_1[58] = "";
  entity_1 = NULL;
  memset(entity_1, 'Z', 58-1);
  entity_1[58-1]='';
  entity_1[entity_8] = 'o';
}