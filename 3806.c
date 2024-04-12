void fun()
{
  int entity_2 = 94;
  entity_2 = 42;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char entity_3 = 'T';
  char* entity_9;
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[51-1]='';
  memset(entity_7, 'X', entity_2-1);
  entity_7[entity_2-1]='';
  memcpy(entity_9, entity_7, entity_2*sizeof(char));
}