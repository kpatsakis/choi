void fun()
{
  int entity_3 = 38;
  int entity_2 = 92;
  char* entity_9;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'A', entity_2-1);
  entity_4[entity_2-1]='';
  entity_9 = (char*)malloc(35*sizeof(char));
  entity_9[35-1]='';
  memcpy(entity_9, entity_4, entity_2*sizeof(char));
}