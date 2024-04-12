void fun()
{
  int entity_0 = 79;
  char entity_3[14] = "";
  entity_3 = NULL;
  char entity_4 = 'A';
  memset(entity_3, 'a', 14-1);
  entity_3[14-1]='';
  entity_3[entity_0] = 'z';
}