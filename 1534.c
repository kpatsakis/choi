void fun()
{
  int entity_5 = 21;
  char entity_6 = 'd';
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  memset(entity_9, 'y', entity_5-1);
  entity_9[entity_5-1]='';
  entity_5 = 59;
  entity_9[99] = 'i';
}