void fun()
{
  int entity_2 = 80;
  char entity_3[99] = "";
  char* entity_8;
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'm', 99-1);
  entity_3[99-1]='0';
  strcpy(entity_8, entity_3);
}