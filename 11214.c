void fun()
{
  int entity_0 = 99;
  char* entity_1;
  char entity_6[9] = "";
  memset(entity_6, 'X', 9-1);
  entity_6[9-1]='0';
  entity_1 = (char*)malloc(21*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}