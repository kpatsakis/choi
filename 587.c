void fun()
{
  int entity_5 = 86;
  int entity_8 = 50;
  char* entity_3;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char entity_7 = 'k';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  memset(entity_4, 'h', entity_5-1);
  entity_4[entity_5-1]='';
  memcpy(entity_3, entity_4, entity_5*sizeof(char));
}