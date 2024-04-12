void fun()
{
  int entity_4 = 34;
  int entity_3 = 29;
  char entity_2 = 'c';
  char* entity_0;
  char entity_1[30] = "";
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'k', 30-1);
  entity_1[30-1]='0';
  entity_3 = 35;
  memcpy(entity_0, entity_1, 30*sizeof(char));
}