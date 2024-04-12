void fun()
{
  char entity_5[86] = "";
  char* entity_1;
  entity_1 = (char*)malloc(45*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'h', 86-1);
  entity_5[86-1]='0';
  entity_5[97] = 'U';
}