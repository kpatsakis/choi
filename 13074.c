void fun()
{
  int entity_6 = 16;
  int entity_0 = 54;
  char* entity_1;
  char entity_7 = 'O';
  char* entity_9;
  char entity_8[62] = "";
  memset(entity_8, 'S', 62-1);
  entity_8[62-1]='0';
  entity_1 = (char*)malloc(2*sizeof(char));
  entity_1[0]='0';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[0]='0';
  entity_0 = 84;
  strcpy(entity_9, entity_8);
}