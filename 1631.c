void fun()
{
  int entity_9 = 98;
  entity_9 = 10;
  char entity_2 = 'l';
  char entity_0[33] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'o', 33-1);
  entity_0[33-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  strcpy(entity_8, entity_0);
}