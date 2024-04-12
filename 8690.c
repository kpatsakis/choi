void fun()
{
  int entity_9 = 92;
  int entity_7 = 47;
  char* entity_5;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  memset(entity_3, 'n', entity_7-1);
  entity_3[entity_7-1]='';
  entity_5 = (char*)malloc(22*sizeof(char));
  entity_5[22-1]='';
  memcpy(entity_5, entity_3, entity_7*sizeof(char));
}