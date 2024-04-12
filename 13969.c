void fun()
{
  int entity_4 = 33;
  int entity_3 = 14;
  char* entity_7;
  char entity_1[55] = "";
  memset(entity_1, 'X', 55-1);
  entity_1[55-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  entity_3 = 22;
  strcpy(entity_7, entity_1);
}