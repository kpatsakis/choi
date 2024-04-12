void fun()
{
  int entity_8 = 13;
  char entity_9[43] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_9, 'z', 43-1);
  entity_9[43-1]='';
  memcpy(entity_4, entity_9, 43*sizeof(char));
}