void fun()
{
  int entity_5 = 60;
  char* entity_8;
  char entity_9[55] = "";
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'k', 55-1);
  entity_9[55-1]='0';
  strcpy(entity_8, entity_9);
}