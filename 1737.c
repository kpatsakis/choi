void fun()
{
  int entity_9 = 46;
  char entity_7[5] = "";
  entity_7 = NULL;
  memset(entity_7, 'h', 5-1);
  entity_7[5-1]='';
  entity_7[91] = 'u';
}