void fun()
{
  int entity_4 = 84;
  int entity_2 = 53;
  int entity_8 = 8;
  char entity_3[80] = "";
  char* entity_0;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[0]='0';
  memset(entity_3, 'd', 80-1);
  entity_3[80-1]='0';
  strcpy(entity_0, entity_3);
}