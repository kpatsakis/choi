void fun()
{
  int entity_3 = 69;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(45*sizeof(char));
  entity_5[45-1]='';
  memset(entity_9, 'f', entity_3-1);
  entity_9[entity_3-1]='';
  memcpy(entity_5, entity_9, entity_3*sizeof(char));
}