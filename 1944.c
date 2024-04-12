void fun()
{
  int entity_1 = 55;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_5 = 'p';
  memset(entity_6, 'M', entity_1-1);
  entity_6[entity_1-1]='';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[39-1]='';
  entity_6[95] = 'e';
}