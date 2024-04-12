void fun()
{
  int entity_1 = 67;
  entity_1 = 64;
  char* entity_9;
  char entity_4[47] = "";
  entity_4 = NULL;
  memset(entity_4, 'I', 47-1);
  entity_4[47-1]='';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memcpy(entity_9, entity_4, 47*sizeof(char));
}