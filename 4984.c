void fun()
{
  int entity_7 = 59;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(32*sizeof(char));
  entity_5[32-1]='';
  memset(entity_3, 'k', entity_7-1);
  entity_3[entity_7-1]='';
  memcpy(entity_5, entity_3, entity_7*sizeof(char));
}