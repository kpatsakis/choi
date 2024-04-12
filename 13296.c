void fun()
{
  int entity_8 = 95;
  int entity_1 = 29;
  entity_8 = 71;
  char entity_0[94] = "";
  char* entity_3;
  char* entity_2;
  memset(entity_0, 'n', 94-1);
  entity_0[94-1]='0';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[0]='0';
  entity_3 = (char*)malloc(84*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_2, entity_0);
}