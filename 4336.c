void fun()
{
  char entity_3[22] = "";
  entity_3 = NULL;
  memset(entity_3, 'M', 22-1);
  entity_3[22-1]='';
  entity_3[62] = 'u';
}