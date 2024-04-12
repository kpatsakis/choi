void fun()
{
  int entity_3 = 72;
  int entity_2 = 20;
  char* entity_1;
  char* entity_0;
  char entity_9[68] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[28-1]='';
  memset(entity_9, 'c', 68-1);
  entity_9[68-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  strcpy(entity_0, entity_9);
}