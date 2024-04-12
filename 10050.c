void fun()
{
  char entity_3[71] = "";
  char* entity_1;
  memset(entity_3, 'U', 71-1);
  entity_3[71-1]='0';
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[0]='0';
  entity_3[90] = 'c';
}