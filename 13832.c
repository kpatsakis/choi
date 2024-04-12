void fun()
{
  int entity_1 = 95;
  int entity_8 = 3;
  entity_1 = 36;
  char entity_4[18] = "";
  char* entity_3;
  char entity_9 = 'c';
  memset(entity_4, 'n', 18-1);
  entity_4[18-1]='0';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_4);
}