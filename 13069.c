void fun()
{
  int entity_6 = 24;
  char entity_8[86] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[0]='0';
  memset(entity_8, 'd', 86-1);
  entity_8[86-1]='0';
  entity_6 = 81;
  strcpy(entity_4, entity_8);
}