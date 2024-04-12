void fun()
{
  int entity_5 = 14;
  entity_5 = 27;
  char* entity_6;
  char* entity_0;
  char entity_1[85] = "";
  char entity_4 = 'F';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'w', 85-1);
  entity_1[85-1]='0';
  entity_6 = (char*)malloc(64*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_0, entity_1);
}