void fun()
{
  int entity_2 = 26;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'f', entity_2-1);
  entity_4[entity_2-1]='';
  entity_9 = (char*)malloc(2*sizeof(char));
  entity_9[2-1]='';
  memcpy(entity_9, entity_4, entity_2*sizeof(char));
}