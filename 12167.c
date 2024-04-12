void fun()
{
  int entity_0 = 42;
  char* entity_5;
  char entity_1[10] = "";
  char entity_8[61] = "";
  memset(entity_1, 'x', 10-1);
  entity_1[10-1]='0';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'D', 61-1);
  entity_8[61-1]='0';
  strcpy(entity_5, entity_1);
}