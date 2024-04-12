void fun()
{
  char entity_1[95] = "";
  entity_1 = NULL;
  memset(entity_1, 'E', 95-1);
  entity_1[95-1]='';
  entity_1[96] = 'D';
}