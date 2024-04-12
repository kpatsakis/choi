void fun()
{
  int entity_5 = 48;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_1;
  char* entity_2;
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[54-1]='';
  entity_2 = (char*)malloc(20*sizeof(char));
  entity_2[20-1]='';
  memset(entity_9, 'Z', entity_5-1);
  entity_9[entity_5-1]='';
  entity_5 = 79;
  memcpy(entity_2, entity_9, entity_5*sizeof(char));
}