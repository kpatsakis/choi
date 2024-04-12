void fun()
{
  char entity_8[12] = "";
  char entity_4 = 'J';
  char* entity_1;
  memset(entity_8, 'R', 12-1);
  entity_8[12-1]='0';
  entity_1 = (char*)malloc(6*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_8);
}