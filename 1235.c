void fun()
{
  int entity_7 = 67;
  char* entity_5;
  char entity_9[69] = "";
  entity_9 = NULL;
  memset(entity_9, 'G', 69-1);
  entity_9[69-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memcpy(entity_5, entity_9, 69*sizeof(char));
}