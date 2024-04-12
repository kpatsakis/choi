void fun()
{
  char entity_8[33] = "";
  char* entity_0;
  memset(entity_8, 'c', 33-1);
  entity_8[33-1]='0';
  entity_0 = (char*)malloc(1*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_8, 33*sizeof(char));
}