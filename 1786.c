void fun()
{
  int entity_9 = 52;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(94*sizeof(char));
  entity_7[94-1]='';
  memset(entity_3, 'N', entity_9-1);
  entity_3[entity_9-1]='';
  memcpy(entity_7, entity_3, entity_9*sizeof(char));
}