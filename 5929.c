void fun()
{
  int entity_8 = 2;
  char entity_9[27] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'S', 27-1);
  entity_9[27-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memcpy(entity_4, entity_9, 27*sizeof(char));
}