void fun()
{
  int entity_1 = 47;
  int entity_7 = 21;
  entity_7 = 21;
  char entity_9[entity_7] = "";
  char* entity_3;
  memset(entity_9, 'A', entity_7-1);
  entity_9[entity_7-1]='0';
  entity_3 = (char*)malloc(47*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_9);
}