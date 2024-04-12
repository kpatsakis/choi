void fun()
{
  int entity_3 = 75;
  int entity_6 = 1;
  char* entity_8;
  char* entity_9;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[55-1]='';
  memset(entity_5, 'B', entity_6-1);
  entity_5[entity_6-1]='';
  entity_8 = (char*)malloc(53*sizeof(char));
  entity_8[53-1]='';
  entity_6 = 78;
  entity_5[51] = 'T';
}