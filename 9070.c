void fun()
{
  char entity_1[85] = "";
  entity_1 = NULL;
  char entity_4 = 'A';
  memset(entity_1, 'a', 85-1);
  entity_1[85-1]='';
  entity_1[21] = 'Y';
}