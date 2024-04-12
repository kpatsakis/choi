void fun()
{
  int entity_1 = 34;
  entity_1 = 9;
  char entity_7[69] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'H', 69-1);
  entity_7[69-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memcpy(entity_9, entity_7, 69*sizeof(char));
}