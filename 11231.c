void fun()
{
  char entity_4[42] = "";
  char* entity_0;
  memset(entity_4, 'a', 42-1);
  entity_4[42-1]='0';
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, 42*sizeof(char));
}