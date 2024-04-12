void fun()
{
  char entity_7[16] = "";
  char entity_5[32] = "";
  memset(entity_7, 'P', 16-1);
  entity_7[16-1]='0';
  memset(entity_5, 'q', 32-1);
  entity_5[32-1]='0';
  entity_7[25] = 'Q';
}