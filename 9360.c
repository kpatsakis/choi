void fun()
{
  char entity_7[49] = "";
  entity_7 = NULL;
  memset(entity_7, 'z', 49-1);
  entity_7[49-1]='';
  entity_7[35] = 'r';
}