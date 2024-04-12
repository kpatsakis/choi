void fun()
{
  int entity_4 = 35;
  entity_4 = 81;
  char entity_1[55] = "";
  char* entity_3;
  memset(entity_1, 'l', 55-1);
  entity_1[55-1]='0';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_1);
}