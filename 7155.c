void fun()
{
  int entity_6 = 100;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  char* entity_9;
  char* entity_5;
  entity_9 = (char*)malloc(2*sizeof(char));
  entity_9[2-1]='';
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  memset(entity_1, 'z', entity_6-1);
  entity_1[entity_6-1]='';
  entity_6 = 2;
  strcpy(entity_9, entity_1);
}