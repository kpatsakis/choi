void fun()
{
  int entity_4 = 67;
  char* entity_5;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'V', entity_4-1);
  entity_1[entity_4-1]='';
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[54-1]='';
  memcpy(entity_5, entity_1, entity_4*sizeof(char));
}