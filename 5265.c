void fun()
{
  int entity_7 = 42;
  char entity_4[100] = "";
  entity_4 = NULL;
  memset(entity_4, 'K', 100-1);
  entity_4[100-1]='';
  entity_4[93] = 'X';
}