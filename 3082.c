void fun()
{
  int entity_2 = 86;
  char entity_7[88] = "";
  entity_7 = NULL;
  memset(entity_7, 'M', 88-1);
  entity_7[88-1]='';
  entity_7[27] = 'B';
}