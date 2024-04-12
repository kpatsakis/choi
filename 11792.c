void fun()
{
  char entity_8[31] = "";
  char* entity_1;
  memset(entity_8, 'c', 31-1);
  entity_8[31-1]='0';
  entity_1 = (char*)malloc(31*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_8);
}