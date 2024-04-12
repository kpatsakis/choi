void fun()
{
  int entity_4 = 53;
  char* entity_3;
  char entity_2 = 's';
  char entity_8[37] = "";
  memset(entity_8, 'm', 37-1);
  entity_8[37-1]='0';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_8);
}