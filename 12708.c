void fun()
{
  int entity_2 = 73;
  char* entity_7;
  char entity_9[25] = "";
  memset(entity_9, 'X', 25-1);
  entity_9[25-1]='0';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_9);
}