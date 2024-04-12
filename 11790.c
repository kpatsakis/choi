void fun()
{
  char* entity_6;
  char entity_8[30] = "";
  memset(entity_8, 'H', 30-1);
  entity_8[30-1]='0';
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_8, 30*sizeof(char));
}