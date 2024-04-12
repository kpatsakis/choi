void fun()
{
  char* entity_0;
  char entity_5[34] = "";
  memset(entity_5, 'U', 34-1);
  entity_5[34-1]='0';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[0]='0';
  entity_5[61] = 'C';
}