void fun()
{
  int entity_7 = 31;
  char* entity_4;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(85*sizeof(char));
  entity_4[85-1]='';
  memset(entity_6, 'N', entity_7-1);
  entity_6[entity_7-1]='';
  entity_7 = 95;
  memcpy(entity_4, entity_6, entity_7*sizeof(char));
}