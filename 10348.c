void fun()
{
  char entity_1[23] = "";
  memset(entity_1, 'e', 23-1);
  entity_1[23-1]='0';
  entity_1[66] = 'R';
}