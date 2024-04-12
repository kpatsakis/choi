void fun()
{
  int entity_9 = 72;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_6 = 'e';
  memset(entity_4, 'M', entity_9-1);
  entity_4[entity_9-1]='';
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  strcpy(entity_8, entity_4);
}