void fun()
{
  int entity_2 = 34;
  int entity_0 = 32;
  entity_2 = 34;
  char* entity_4;
  char entity_9[entity_2] = "";
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[0]='0';
  memset(entity_9, 'r', entity_2-1);
  entity_9[entity_2-1]='0';
  strcpy(entity_4, entity_9);
}