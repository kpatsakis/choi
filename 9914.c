void fun()
{
  int entity_9 = 25;
  entity_9 = 25;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char entity_5 = 'D';
  char* entity_6;
  memset(entity_7, 'z', entity_9-1);
  entity_7[entity_9-1]='';
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[28-1]='';
  strcpy(entity_6, entity_7);
}