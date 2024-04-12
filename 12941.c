void fun()
{
  int entity_3 = 9;
  char* entity_1;
  char entity_4[91] = "";
  char entity_2 = 'S';
  memset(entity_4, 'c', 91-1);
  entity_4[91-1]='0';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_4);
}