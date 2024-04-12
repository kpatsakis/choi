void fun()
{
  int entity_9 = 44;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[38-1]='';
  memset(entity_3, 'B', entity_9-1);
  entity_3[entity_9-1]='';
  entity_9 = 58;
  memcpy(entity_6, entity_3, entity_9*sizeof(char));
}