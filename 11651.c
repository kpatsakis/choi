void fun()
{
  char entity_3[33] = "";
  char* entity_0;
  entity_0 = (char*)malloc(49*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'Q', 33-1);
  entity_3[33-1]='0';
  memcpy(entity_0, entity_3, 33*sizeof(char));
}