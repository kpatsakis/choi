void fun()
{
  char entity_4[4] = "";
  char* entity_8;
  memset(entity_4, 'H', 4-1);
  entity_4[4-1]='0';
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_4);
}