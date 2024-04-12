void fun()
{
  int entity_9 = 53;
  char entity_4 = 'H';
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(20*sizeof(char));
  entity_3[20-1]='';
  memset(entity_7, 'D', entity_9-1);
  entity_7[entity_9-1]='';
  entity_7[83] = 't';
}