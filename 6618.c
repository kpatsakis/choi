void fun()
{
  int entity_0 = 88;
  int entity_9 = 78;
  char entity_1 = 'G';
  char* entity_6;
  char entity_5[50] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(61*sizeof(char));
  entity_4[61-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_5, 'k', 50-1);
  entity_5[50-1]='';
  entity_9 = 40;
  strcpy(entity_6, entity_5);
}