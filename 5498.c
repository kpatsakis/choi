void fun()
{
  int entity_2 = 34;
  int entity_9 = 52;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_1;
  entity_1 = (char*)malloc(38*sizeof(char));
  entity_1[38-1]='';
  entity_0 = (char*)malloc(11*sizeof(char));
  entity_0[11-1]='';
  memset(entity_3, 'M', entity_9-1);
  entity_3[entity_9-1]='';
  strcpy(entity_0, entity_3);
}