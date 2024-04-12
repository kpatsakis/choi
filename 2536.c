void fun()
{
  int entity_1 = 66;
  entity_1 = 55;
  char entity_5[71] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'i', 71-1);
  entity_5[71-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memcpy(entity_9, entity_5, 71*sizeof(char));
}