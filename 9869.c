void fun()
{
  int entity_9 = 41;
  char* entity_0;
  char entity_3[10] = "";
  entity_3 = NULL;
  char entity_8[2] = "";
  entity_8 = NULL;
  memset(entity_3, 's', 10-1);
  entity_3[10-1]='';
  memset(entity_8, 'Q', 2-1);
  entity_8[2-1]='';
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_9 = 36;
  strcpy(entity_0, entity_8);
}