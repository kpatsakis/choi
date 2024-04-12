void fun()
{
  int entity_9 = 38;
  char* entity_7;
  char entity_1[44] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(1*sizeof(char));
  entity_7[1-1]='';
  memset(entity_1, 'x', 44-1);
  entity_1[44-1]='';
  entity_9 = 25;
  entity_1[entity_9] = 'O';
}