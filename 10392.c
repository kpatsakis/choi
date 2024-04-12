void fun()
{
  char entity_9[100] = "";
  memset(entity_9, 't', 100-1);
  entity_9[100-1]='0';
  entity_9[71] = 'V';
}