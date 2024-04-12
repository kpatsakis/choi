void fun()
{
  int entity_9 = 2;
  char* entity_7;
  char* entity_4;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  memset(entity_0, 'a', entity_9-1);
  entity_0[entity_9-1]='';
  entity_7 = (char*)malloc(34*sizeof(char));
  entity_7[34-1]='';
  entity_4 = (char*)malloc(88*sizeof(char));
  entity_4[88-1]='';
  strcpy(entity_4, entity_0);
}