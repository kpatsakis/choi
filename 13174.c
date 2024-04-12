void fun()
{
  int entity_9 = 17;
  entity_9 = 17;
  char entity_6 = 'y';
  char* entity_0;
  char entity_5[entity_9] = "";
  memset(entity_5, 'r', entity_9-1);
  entity_5[entity_9-1]='0';
  entity_0 = (char*)malloc(1*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_5);
}