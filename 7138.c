void fun()
{
  char entity_3[47] = "";
  entity_3 = NULL;
  char entity_1 = 'u';
  memset(entity_3, 'a', 47-1);
  entity_3[47-1]='';
  entity_3[91] = 'u';
}