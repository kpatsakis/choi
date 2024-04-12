void fun()
{
  int entity_1 = 43;
  char entity_9 = 'd';
  char entity_7[80] = "";
  char entity_8[entity_1] = "";
  char* entity_0;
  char* entity_2;
  memset(entity_8, 'E', entity_1-1);
  entity_8[entity_1-1]='0';
  entity_0 = (char*)malloc(5*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'z', 80-1);
  entity_7[80-1]='0';
  entity_2 = (char*)malloc(33*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_8);
}