void fun()
{
  int entity_0 = 0;
  int entity_9 = 24;
  char entity_2 = 'c';
  char* entity_7;
  char entity_3[79] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_3, 'W', 79-1);
  entity_3[79-1]='';
  memcpy(entity_7, entity_3, 79*sizeof(char));
}