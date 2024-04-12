void fun()
{
  int entity_9 = 6;
  entity_9 = 18;
  char entity_4[72] = "";
  entity_4 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_4, 'd', 72-1);
  entity_4[72-1]='';
  memcpy(entity_6, entity_4, 72*sizeof(char));
}