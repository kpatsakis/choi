void fun()
{
  int entity_9 = 94;
  entity_9 = 93;
  char* entity_4;
  char entity_3[57] = "";
  entity_3 = NULL;
  memset(entity_3, 'n', 57-1);
  entity_3[57-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  memcpy(entity_4, entity_3, 57*sizeof(char));
}