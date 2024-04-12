void fun()
{
  int entity_1 = 79;
  int entity_7 = 70;
  entity_1 = 28;
  char entity_0 = 'X';
  char entity_9[53] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'K', 53-1);
  entity_9[53-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memcpy(entity_5, entity_9, 53*sizeof(char));
}