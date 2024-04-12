void fun()
{
  int entity_5 = 20;
  char* entity_8;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_2 = 'r';
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[43-1]='';
  memset(entity_1, 't', entity_5-1);
  entity_1[entity_5-1]='';
  memcpy(entity_8, entity_1, entity_5*sizeof(char));
}