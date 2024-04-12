void fun()
{
  int entity_5 = 81;
  char entity_0[15] = "";
  char* entity_8;
  char* entity_1;
  char entity_2 = 'k';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  entity_8 = (char*)malloc(30*sizeof(char));
  entity_8[0]='0';
  memset(entity_0, 'i', 15-1);
  entity_0[15-1]='0';
  strcpy(entity_1, entity_0);
}