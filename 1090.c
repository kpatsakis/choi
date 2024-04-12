void fun()
{
  int entity_1 = 11;
  char entity_4[26] = "";
  entity_4 = NULL;
  memset(entity_4, 'p', 26-1);
  entity_4[26-1]='';
  entity_4[entity_1] = 'b';
}