void fun()
{
  int entity_4 = 37;
  entity_4 = 80;
  char* entity_5;
  char entity_6[93] = "";
  entity_6 = NULL;
  memset(entity_6, 'a', 93-1);
  entity_6[93-1]='';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[entity_4-1]='';
  memcpy(entity_5, entity_6, 93*sizeof(char));
}