void fun()
{
  int entity_3 = 43;
  char* entity_7;
  char entity_9[83] = "";
  entity_9 = NULL;
  memset(entity_9, 'y', 83-1);
  entity_9[83-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memcpy(entity_7, entity_9, 83*sizeof(char));
}