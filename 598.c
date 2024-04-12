void fun()
{
  int entity_2 = 65;
  char* entity_5;
  char entity_9[79] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', 79-1);
  entity_9[79-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memcpy(entity_5, entity_9, 79*sizeof(char));
}