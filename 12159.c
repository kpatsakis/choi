void fun()
{
  int entity_2 = 23;
  char* entity_1;
  char entity_9[entity_2] = "";
  entity_1 = (char*)malloc(48*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'h', entity_2-1);
  entity_9[entity_2-1]='0';
  strcpy(entity_1, entity_9);
}