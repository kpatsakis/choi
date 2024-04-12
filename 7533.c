void fun()
{
  int entity_9 = 6;
  char entity_6 = 'w';
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_7, 'R', entity_9-1);
  entity_7[entity_9-1]='';
  entity_4 = (char*)malloc(32*sizeof(char));
  entity_4[32-1]='';
  entity_9 = 14;
  entity_7[94] = 'P';
}