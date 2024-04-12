void fun()
{
  int entity_1 = 73;
  int entity_0 = 7;
  char entity_8[53] = "";
  char* entity_3;
  memset(entity_8, 'J', 53-1);
  entity_8[53-1]='0';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_8);
}