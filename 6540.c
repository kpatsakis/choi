void fun()
{
  int entity_7 = 43;
  char* entity_1;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(67*sizeof(char));
  entity_1[67-1]='';
  memset(entity_8, 'J', entity_7-1);
  entity_8[entity_7-1]='';
  memcpy(entity_1, entity_8, entity_7*sizeof(char));
}