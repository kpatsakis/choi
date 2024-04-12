void fun()
{
  char entity_1 = 'J';
  char entity_7[68] = "";
  entity_7 = NULL;
  memset(entity_7, 'U', 68-1);
  entity_7[68-1]='';
  entity_7[95] = 'd';
}