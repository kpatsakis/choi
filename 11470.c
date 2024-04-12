void fun()
{
  char entity_0[61] = "";
  char* entity_4;
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'i', 61-1);
  entity_0[61-1]='0';
  memcpy(entity_4, entity_0, 61*sizeof(char));
}