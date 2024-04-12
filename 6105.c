void fun()
{
  int entity_5 = 50;
  char* entity_2;
  char* entity_0;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char entity_1 = 'H';
  char entity_6 = 'F';
  entity_2 = (char*)malloc(77*sizeof(char));
  entity_2[77-1]='';
  entity_0 = (char*)malloc(87*sizeof(char));
  entity_0[87-1]='';
  memset(entity_9, 'b', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_0, entity_9, entity_5*sizeof(char));
}