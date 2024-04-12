void fun()
{
  int entity_8 = 42;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[6-1]='';
  memset(entity_4, 'p', entity_8-1);
  entity_4[entity_8-1]='';
  memcpy(entity_2, entity_4, entity_8*sizeof(char));
}