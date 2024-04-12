void fun()
{
  int entity_9 = 45;
  entity_9 = 34;
  char* entity_6;
  char entity_5[entity_9] = "";
  memset(entity_5, 'y', entity_9-1);
  entity_5[entity_9-1]='0';
  entity_6 = (char*)malloc(30*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_5, entity_9*sizeof(char));
}