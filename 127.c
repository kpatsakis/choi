void fun()
{
  int entity_3 = 47;
  int entity_9 = 46;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'B', entity_3-1);
  entity_4[entity_3-1]='';
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  memcpy(entity_8, entity_4, entity_3*sizeof(char));
}