void fun()
{
  char* entity_6;
  char entity_8[49] = "";
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'P', 49-1);
  entity_8[49-1]='0';
  strcpy(entity_6, entity_8);
}