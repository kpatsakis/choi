void fun()
{
  int entity_3 = 80;
  char* entity_4;
  char entity_1[15] = "";
  memset(entity_1, 'h', 15-1);
  entity_1[15-1]='0';
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[0]='0';
  entity_3 = 43;
  strcpy(entity_4, entity_1);
}