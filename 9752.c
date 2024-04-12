void fun()
{
  int entity_7 = 64;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'R', entity_7-1);
  entity_9[entity_7-1]='';
  entity_3 = (char*)malloc(70*sizeof(char));
  entity_3[70-1]='';
  memcpy(entity_3, entity_9, entity_7*sizeof(char));
}