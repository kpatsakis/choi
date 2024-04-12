void fun()
{
  int entity_1 = 91;
  int entity_5 = 58;
  char entity_8[8] = "";
  char entity_0 = 'k';
  char* entity_9;
  memset(entity_8, 'b', 8-1);
  entity_8[8-1]='0';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_8);
}