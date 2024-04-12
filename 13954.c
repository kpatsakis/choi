void fun()
{
  int entity_8 = 43;
  int entity_9 = 2;
  entity_8 = 81;
  char* entity_0;
  char* entity_6;
  char entity_5[99] = "";
  entity_0 = (char*)malloc(8*sizeof(char));
  entity_0[0]='0';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[0]='0';
  memset(entity_5, 'E', 99-1);
  entity_5[99-1]='0';
  strcpy(entity_6, entity_5);
}