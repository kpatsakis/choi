void fun()
{
  int entity_5 = 90;
  char entity_3[26] = "";
  entity_3 = NULL;
  char entity_7 = 'f';
  memset(entity_3, 'b', 26-1);
  entity_3[26-1]='';
  entity_3[entity_5] = 'G';
}