void fun()
{
  char entity_0[31] = "";
  char* entity_7;
  char* entity_8;
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[0]='0';
  entity_8 = (char*)malloc(67*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'x', 31-1);
  entity_0[31-1]='0';
  strcpy(entity_8, entity_0);
}