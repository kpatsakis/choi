void fun()
{
  int entity_9 = 80;
  char* entity_2;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_5, 'w', entity_9-1);
  entity_5[entity_9-1]='';
  entity_2 = (char*)malloc(69*sizeof(char));
  entity_2[69-1]='';
  entity_9 = 9;
  memcpy(entity_2, entity_5, entity_9*sizeof(char));
}