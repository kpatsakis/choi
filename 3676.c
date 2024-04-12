void fun()
{
  int entity_9 = 60;
  int entity_8 = 38;
  char entity_7[99] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_7, 'j', 99-1);
  entity_7[99-1]='';
  memcpy(entity_6, entity_7, 99*sizeof(char));
}