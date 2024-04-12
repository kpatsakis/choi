void fun()
{
  int entity_2 = 79;
  char* entity_9;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'F', entity_2-1);
  entity_4[entity_2-1]='';
  entity_9 = (char*)malloc(25*sizeof(char));
  entity_9[25-1]='';
  memcpy(entity_9, entity_4, entity_2*sizeof(char));
}