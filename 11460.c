void fun()
{
  char entity_4[55] = "";
  char* entity_5;
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[0]='0';
  memset(entity_4, 'Y', 55-1);
  entity_4[55-1]='0';
  memcpy(entity_5, entity_4, 55*sizeof(char));
}