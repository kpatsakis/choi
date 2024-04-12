void fun()
{
  char entity_0[98] = "";
  char entity_4[27] = "";
  char* entity_1;
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'B', 98-1);
  entity_0[98-1]='0';
  memset(entity_4, 'w', 27-1);
  entity_4[27-1]='0';
  strcpy(entity_1, entity_4);
}