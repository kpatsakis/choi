void fun()
{
  int entity_9 = 82;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memset(entity_8, 'R', entity_9-1);
  entity_8[entity_9-1]='';
  strcpy(entity_4, entity_8);
}