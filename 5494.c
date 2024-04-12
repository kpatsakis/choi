void fun()
{
  int entity_6 = 17;
  char* entity_8;
  char entity_9[16] = "";
  entity_9 = NULL;
  memset(entity_9, 'V', 16-1);
  entity_9[16-1]='';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memcpy(entity_8, entity_9, 16*sizeof(char));
}