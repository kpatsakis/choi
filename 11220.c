void fun()
{
  int entity_8 = 28;
  char entity_7[4] = "";
  char entity_2 = 'Z';
  char* entity_9;
  memset(entity_7, 'y', 4-1);
  entity_7[4-1]='0';
  entity_9 = (char*)malloc(80*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_7);
}