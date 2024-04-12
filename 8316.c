void fun()
{
  int entity_4 = 78;
  char entity_9[28] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'w', 28-1);
  entity_9[28-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memcpy(entity_6, entity_9, 28*sizeof(char));
}