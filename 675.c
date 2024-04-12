void fun()
{
  int entity_9 = 85;
  char* entity_4;
  char entity_8[18] = "";
  entity_8 = NULL;
  memset(entity_8, 'V', 18-1);
  entity_8[18-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  entity_9 = 22;
  memcpy(entity_4, entity_8, 18*sizeof(char));
}