void fun()
{
  char entity_6 = 'E';
  char* entity_0;
  char entity_5[99] = "";
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'U', 99-1);
  entity_5[99-1]='0';
  memcpy(entity_0, entity_5, 99*sizeof(char));
}