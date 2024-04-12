void fun()
{
  int entity_8 = 92;
  char* entity_7;
  char entity_9[54] = "";
  entity_9 = NULL;
  memset(entity_9, 'w', 54-1);
  entity_9[54-1]='';
  entity_7 = (char*)malloc(55*sizeof(char));
  entity_7[55-1]='';
  entity_9[entity_8] = 'j';
}