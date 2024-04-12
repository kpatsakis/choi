void fun()
{
  int entity_4 = 2;
  char entity_1[67] = "";
  entity_1 = NULL;
  memset(entity_1, 'F', 67-1);
  entity_1[67-1]='';
  entity_1[entity_4] = 'J';
}