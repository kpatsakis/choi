void fun()
{
  int entity_2 = 16;
  char entity_7[83] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', 83-1);
  entity_7[83-1]='';
  entity_7[entity_2] = 'X';
}