void fun()
{
  int entity_9 = 98;
  entity_9 = 50;
  char entity_0[59] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_0, 'l', 59-1);
  entity_0[59-1]='';
  strcpy(entity_8, entity_0);
}