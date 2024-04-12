void fun()
{
  int entity_4 = 27;
  char entity_5[88] = "";
  char* entity_8;
  memset(entity_5, 'd', 88-1);
  entity_5[88-1]='0';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[0]='0';
  entity_4 = 40;
  strcpy(entity_8, entity_5);
}