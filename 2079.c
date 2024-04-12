void fun()
{
  int entity_8 = 44;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'Q', entity_8-1);
  entity_9[entity_8-1]='';
  entity_4 = (char*)malloc(68*sizeof(char));
  entity_4[68-1]='';
  memcpy(entity_4, entity_9, entity_8*sizeof(char));
}