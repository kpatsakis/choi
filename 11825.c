void fun()
{
  int entity_8 = 22;
  char entity_9[1] = "";
  char* entity_7;
  entity_7 = (char*)malloc(85*sizeof(char));
  entity_7[0]='0';
  memset(entity_9, 'E', 1-1);
  entity_9[1-1]='0';
  strcpy(entity_7, entity_9);
}