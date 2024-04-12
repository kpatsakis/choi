void fun()
{
  char* entity_8;
  char entity_2[86] = "";
  entity_8 = (char*)malloc(4*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'U', 86-1);
  entity_2[86-1]='0';
  memcpy(entity_8, entity_2, 86*sizeof(char));
}