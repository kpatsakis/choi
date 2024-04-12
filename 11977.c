void fun()
{
  int entity_1 = 80;
  char entity_5 = 'p';
  char entity_3[2] = "";
  char* entity_8;
  memset(entity_3, 's', 2-1);
  entity_3[2-1]='0';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_3);
}