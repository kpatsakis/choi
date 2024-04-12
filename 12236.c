void fun()
{
  int entity_5 = 68;
  char entity_9[65] = "";
  char* entity_1;
  memset(entity_9, 'O', 65-1);
  entity_9[65-1]='0';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_9);
}