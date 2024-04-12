void fun()
{
  int entity_0 = 75;
  char* entity_9;
  char entity_8[41] = "";
  memset(entity_8, 'O', 41-1);
  entity_8[41-1]='0';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_8);
}