void fun()
{
  int entity_1 = 9;
  char entity_6 = 'C';
  char entity_9[49] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'i', 49-1);
  entity_9[49-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  entity_1 = 36;
  memcpy(entity_5, entity_9, 49*sizeof(char));
}