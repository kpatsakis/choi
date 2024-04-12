void fun()
{
  int entity_9 = 59;
  int entity_0 = 41;
  char entity_6[entity_9] = "";
  char* entity_1;
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'C', entity_9-1);
  entity_6[entity_9-1]='0';
  memcpy(entity_1, entity_6, entity_9*sizeof(char));
}