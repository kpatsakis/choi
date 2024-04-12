void fun()
{
  int entity_1 = 39;
  char entity_9 = 'A';
  char entity_8[21] = "";
  char entity_4[13] = "";
  memset(entity_4, 'q', 13-1);
  entity_4[13-1]='0';
  memset(entity_8, 'r', 21-1);
  entity_8[21-1]='0';
  entity_8[94] = 'h';
}