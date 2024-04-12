void fun()
{
  int entity_9 = 9;
  int entity_7 = 29;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(32*sizeof(char));
  entity_2[32-1]='';
  memset(entity_3, 'r', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_2, entity_3, entity_9*sizeof(char));
}