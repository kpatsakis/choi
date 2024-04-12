void fun()
{
  char entity_2[33] = "";
  char* entity_4;
  entity_4 = (char*)malloc(56*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'm', 33-1);
  entity_2[33-1]='0';
  memcpy(entity_4, entity_2, 33*sizeof(char));
}