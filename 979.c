void fun()
{
  int entity_9 = 23;
  entity_9 = 81;
  char entity_4 = 'q';
  char* entity_0;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(81*sizeof(char));
  entity_0[81-1]='';
  memset(entity_8, 'Y', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[87] = 'R';
}