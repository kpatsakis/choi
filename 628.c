void fun()
{
  int entity_0 = 37;
  char entity_3[34] = "";
  entity_3 = NULL;
  memset(entity_3, 'B', 34-1);
  entity_3[34-1]='';
  entity_3[42] = 'p';
}