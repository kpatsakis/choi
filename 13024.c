void fun()
{
  int entity_9 = 45;
  entity_9 = 45;
  char* entity_0;
  char* entity_5;
  char entity_4[entity_9] = "";
  memset(entity_4, 'j', entity_9-1);
  entity_4[entity_9-1]='0';
  entity_5 = (char*)malloc(61*sizeof(char));
  entity_5[0]='0';
  entity_0 = (char*)malloc(33*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_4);
}