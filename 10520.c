void fun()
{
  char entity_3[83] = "";
  char entity_7[38] = "";
  memset(entity_7, 'c', 38-1);
  entity_7[38-1]='0';
  memset(entity_3, 'g', 83-1);
  entity_3[83-1]='0';
  entity_7[40] = 'b';
}