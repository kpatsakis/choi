void fun()
{
  int entity_2 = 24;
  entity_2 = 52;
  char entity_7[71] = "";
  entity_7 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_7, 'h', 71-1);
  entity_7[71-1]='';
  memcpy(entity_9, entity_7, 71*sizeof(char));
}