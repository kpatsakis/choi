void fun()
{
  int entity_9 = 38;
  char entity_5[84] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_5, 'C', 84-1);
  entity_5[84-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  entity_9 = 5;
  memcpy(entity_1, entity_5, 84*sizeof(char));
}