void fun()
{
  char* entity_1;
  char entity_4[33] = "";
  memset(entity_4, 'T', 33-1);
  entity_4[33-1]='0';
  entity_1 = (char*)malloc(49*sizeof(char));
  entity_1[0]='0';
  entity_4[23] = 'J';
}