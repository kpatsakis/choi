void fun()
{
  char* entity_3;
  char entity_0[42] = "";
  entity_3 = (char*)malloc(85*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'j', 42-1);
  entity_0[42-1]='0';
  memcpy(entity_3, entity_0, 42*sizeof(char));
}