void fun()
{
  int entity_2 = 77;
  char entity_1[67] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', 67-1);
  entity_1[67-1]='';
  entity_1[entity_2] = 'e';
}