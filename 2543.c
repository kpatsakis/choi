void fun()
{
  int entity_7 = 98;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[89-1]='';
  memset(entity_3, 'Q', entity_7-1);
  entity_3[entity_7-1]='';
  entity_7 = 83;
  memcpy(entity_5, entity_3, entity_7*sizeof(char));
}