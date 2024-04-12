void fun()
{
  int entity_9 = 25;
  char* entity_7;
  char entity_4[entity_9] = "";
  memset(entity_4, 'y', entity_9-1);
  entity_4[entity_9-1]='0';
  entity_7 = (char*)malloc(83*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_4);
}