void fun()
{
  int entity_3 = 87;
  char entity_1[30] = "";
  char* entity_8;
  memset(entity_1, 'O', 30-1);
  entity_1[30-1]='0';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  entity_3 = 20;
  strcpy(entity_8, entity_1);
}