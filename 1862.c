void fun()
{
  int entity_7 = 56;
  entity_7 = 79;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_2;
  memset(entity_6, 'N', entity_7-1);
  entity_6[entity_7-1]='';
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[93-1]='';
  memcpy(entity_2, entity_6, entity_7*sizeof(char));
}