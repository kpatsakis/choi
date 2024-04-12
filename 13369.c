void fun()
{
  int entity_0 = 7;
  entity_0 = 49;
  char entity_5 = 'X';
  char entity_7[36] = "";
  char* entity_1;
  char entity_8[68] = "";
  char entity_2 = 'J';
  memset(entity_7, 'q', 36-1);
  entity_7[36-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memset(entity_8, 'S', 68-1);
  entity_8[68-1]='0';
  strcpy(entity_1, entity_7);
}