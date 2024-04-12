void fun()
{
  int entity_1 = 82;
  char entity_5[89] = "";
  char entity_9[90] = "";
  memset(entity_5, 'K', 89-1);
  entity_5[89-1]='0';
  memset(entity_9, 'f', 90-1);
  entity_9[90-1]='0';
  entity_5[16] = 'B';
}