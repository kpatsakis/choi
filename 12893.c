void fun()
{
  int entity_8 = 96;
  int entity_7 = 86;
  char* entity_9;
  char entity_6[25] = "";
  memset(entity_6, 'q', 25-1);
  entity_6[25-1]='0';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_6);
}