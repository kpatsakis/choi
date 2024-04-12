void fun()
{
  int entity_2 = 61;
  char* entity_5;
  char entity_9[21] = "";
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'X', 21-1);
  entity_9[21-1]='0';
  strcpy(entity_5, entity_9);
}