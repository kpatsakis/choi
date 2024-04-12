void fun()
{
  int entity_9 = 4;
  char entity_7[30] = "";
  char* entity_8;
  memset(entity_7, 'w', 30-1);
  entity_7[30-1]='0';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_7);
}