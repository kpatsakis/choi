void fun()
{
  int entity_8 = 29;
  char entity_4[9] = "";
  char* entity_6;
  char* entity_0;
  memset(entity_4, 'D', 9-1);
  entity_4[9-1]='0';
  entity_0 = (char*)malloc(entity_8*sizeof(char));
  entity_0[0]='0';
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_0, entity_4);
}