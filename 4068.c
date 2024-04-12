void fun()
{
  char entity_7[95] = "";
  entity_7 = NULL;
  memset(entity_7, 'P', 95-1);
  entity_7[95-1]='';
  entity_7[7] = 'P';
}