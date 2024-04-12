void fun()
{
  int entity_5 = 32;
  char* entity_2;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  entity_2 = (char*)malloc(42*sizeof(char));
  entity_2[42-1]='';
  memset(entity_6, 'D', entity_5-1);
  entity_6[entity_5-1]='';
  memcpy(entity_2, entity_6, entity_5*sizeof(char));
}