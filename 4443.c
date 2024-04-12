void fun()
{
  int entity_6 = 37;
  char entity_1[83] = "";
  entity_1 = NULL;
  char entity_3[16] = "";
  entity_3 = NULL;
  memset(entity_1, 'q', 83-1);
  entity_1[83-1]='';
  memset(entity_3, 'I', 16-1);
  entity_3[16-1]='';
  entity_1[94] = 'Y';
}