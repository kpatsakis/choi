void fun()
{
  int entity_7 = 35;
  int entity_3 = 74;
  char* entity_8;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'W', entity_3-1);
  entity_9[entity_3-1]='';
  entity_8 = (char*)malloc(28*sizeof(char));
  entity_8[28-1]='';
  entity_3 = 7;
  memcpy(entity_8, entity_9, entity_3*sizeof(char));
}