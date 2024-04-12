void fun()
{
  int entity_2 = 30;
  int entity_9 = 25;
  char* entity_7;
  char entity_0[entity_2] = "";
  entity_7 = (char*)malloc(65*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'y', entity_2-1);
  entity_0[entity_2-1]='0';
  strcpy(entity_7, entity_0);
}