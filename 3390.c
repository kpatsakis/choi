void fun()
{
  int entity_4 = 22;
  char entity_8[93] = "";
  entity_8 = NULL;
  memset(entity_8, 'E', 93-1);
  entity_8[93-1]='';
  entity_8[51] = 'Z';
}