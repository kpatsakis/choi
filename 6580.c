void fun()
{
  int entity_2 = 70;
  char entity_0[5] = "";
  entity_0 = NULL;
  memset(entity_0, 'r', 5-1);
  entity_0[5-1]='';
  entity_2 = 34;
  entity_0[entity_2] = 'a';
}