void fun()
{
  char entity_9[24] = "";
  char entity_6[16] = "";
  memset(entity_9, 'I', 24-1);
  entity_9[24-1]='0';
  memset(entity_6, 'D', 16-1);
  entity_6[16-1]='0';
  entity_9[87] = 'P';
}