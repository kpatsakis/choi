void fun()
{
  char entity_7[18] = "";
  char entity_2 = 'K';
  memset(entity_7, 'A', 18-1);
  entity_7[18-1]='0';
  entity_7[100] = 'y';
}