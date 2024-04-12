void fun()
{
  int entity_5 = 83;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(30*sizeof(char));
  entity_3[30-1]='';
  memset(entity_7, 'U', entity_5-1);
  entity_7[entity_5-1]='';
  entity_5 = 62;
  memcpy(entity_3, entity_7, entity_5*sizeof(char));
}