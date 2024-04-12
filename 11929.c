void fun()
{
  int entity_5 = 9;
  char* entity_6;
  char entity_8[80] = "";
  memset(entity_8, 'D', 80-1);
  entity_8[80-1]='0';
  entity_6 = (char*)malloc(31*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_8);
}