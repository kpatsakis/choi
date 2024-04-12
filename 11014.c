void fun()
{
  char entity_6[42] = "";
  char* entity_8;
  entity_8 = (char*)malloc(28*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'E', 42-1);
  entity_6[42-1]='0';
  memcpy(entity_8, entity_6, 42*sizeof(char));
}