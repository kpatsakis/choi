void fun()
{
  int entity_9 = 40;
  char* entity_3;
  char* entity_0;
  char* entity_5;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(30*sizeof(char));
  entity_5[30-1]='';
  memset(entity_4, 'M', entity_9-1);
  entity_4[entity_9-1]='';
  entity_3 = (char*)malloc(55*sizeof(char));
  entity_3[55-1]='';
  entity_0 = (char*)malloc(31*sizeof(char));
  entity_0[31-1]='';
  entity_9 = 12;
  memcpy(entity_0, entity_4, entity_9*sizeof(char));
}