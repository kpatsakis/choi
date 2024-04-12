void fun()
{
  char* entity_4;
  char entity_0[56] = "";
  memset(entity_0, 'n', 56-1);
  entity_0[56-1]='0';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_0, 56*sizeof(char));
}