void fun()
{
  char entity_0[63] = "";
  char* entity_1;
  memset(entity_0, 'v', 63-1);
  entity_0[63-1]='0';
  entity_1 = (char*)malloc(48*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_0, 63*sizeof(char));
}