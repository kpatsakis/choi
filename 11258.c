void fun()
{
  char* entity_0;
  char entity_6[58] = "";
  memset(entity_6, 'J', 58-1);
  entity_6[58-1]='0';
  entity_0 = (char*)malloc(19*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_6, 58*sizeof(char));
}