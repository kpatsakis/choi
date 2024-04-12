void fun()
{
  int entity_9 = 34;
  char entity_2[79] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'c', 79-1);
  entity_2[79-1]='';
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  entity_9 = 84;
  memcpy(entity_1, entity_2, 79*sizeof(char));
}