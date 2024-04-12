void fun()
{
  int entity_7 = 15;
  int entity_0 = 98;
  entity_7 = 15;
  char entity_6 = 'N';
  char* entity_4;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'q', entity_7-1);
  entity_5[entity_7-1]='';
  entity_4 = (char*)malloc(28*sizeof(char));
  entity_4[28-1]='';
  entity_3 = (char*)malloc(14*sizeof(char));
  entity_3[14-1]='';
  strcpy(entity_4, entity_5);
}