void fun()
{
  char entity_8[100] = "";
  char entity_3 = 'd';
  char* entity_1;
  entity_1 = (char*)malloc(18*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'B', 100-1);
  entity_8[100-1]='0';
  strcpy(entity_1, entity_8);
}