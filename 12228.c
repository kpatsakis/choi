void fun()
{
  int entity_1 = 57;
  int entity_2 = 80;
  char entity_9[entity_2] = "";
  char entity_3[23] = "";
  char* entity_5;
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'b', 23-1);
  entity_3[23-1]='0';
  memset(entity_9, 'c', entity_2-1);
  entity_9[entity_2-1]='0';
  strcpy(entity_5, entity_9);
}