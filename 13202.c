void fun()
{
  int entity_2 = 7;
  entity_2 = 29;
  char* entity_9;
  char entity_7[22] = "";
  memset(entity_7, 'G', 22-1);
  entity_7[22-1]='0';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_7);
}