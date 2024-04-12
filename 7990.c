void fun()
{
  int entity_5 = 89;
  char* entity_7;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(40*sizeof(char));
  entity_7[40-1]='';
  memset(entity_1, 'F', entity_5-1);
  entity_1[entity_5-1]='';
  memcpy(entity_7, entity_1, entity_5*sizeof(char));
}