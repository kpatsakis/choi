void fun()
{
  int entity_4 = 21;
  char* entity_3;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_0;
  char* entity_6;
  entity_6 = (char*)malloc(41*sizeof(char));
  entity_6[41-1]='';
  memset(entity_5, 'J', entity_4-1);
  entity_5[entity_4-1]='';
  entity_3 = (char*)malloc(7*sizeof(char));
  entity_3[7-1]='';
  entity_0 = (char*)malloc(4*sizeof(char));
  entity_0[4-1]='';
  strcpy(entity_3, entity_5);
}