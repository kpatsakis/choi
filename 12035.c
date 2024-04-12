void fun()
{
  int entity_9 = 23;
  char* entity_0;
  char* entity_3;
  char entity_7[entity_9] = "";
  memset(entity_7, 'f', entity_9-1);
  entity_7[entity_9-1]='0';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(65*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_3, entity_7);
}