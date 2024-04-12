void fun()
{
  int entity_9 = 46;
  entity_9 = 67;
  char* entity_5;
  char entity_1 = 'g';
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'G', entity_9-1);
  entity_6[entity_9-1]='';
  entity_5 = (char*)malloc(14*sizeof(char));
  entity_5[14-1]='';
  entity_6[29] = 'a';
}