void fun()
{
  char entity_7[59] = "";
  entity_7 = NULL;
  memset(entity_7, 'c', 59-1);
  entity_7[59-1]='';
  entity_7[80] = 'A';
}