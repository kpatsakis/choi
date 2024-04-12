void fun()
{
  int entity_1 = 33;
  int entity_2 = 65;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char entity_4 = 'U';
  char entity_6 = 'G';
  char* entity_9;
  entity_9 = (char*)malloc(42*sizeof(char));
  entity_9[42-1]='';
  memset(entity_8, 'Y', entity_2-1);
  entity_8[entity_2-1]='';
  entity_2 = 94;
  memcpy(entity_9, entity_8, entity_2*sizeof(char));
}