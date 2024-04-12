void fun()
{
  int entity_2 = 49;
  char* entity_7;
  char entity_0[68] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_0, 'w', 68-1);
  entity_0[68-1]='';
  entity_7 = (char*)malloc(31*sizeof(char));
  entity_7[31-1]='';
  entity_4 = (char*)malloc(7*sizeof(char));
  entity_4[7-1]='';
  memset(entity_5, 'h', entity_2-1);
  entity_5[entity_2-1]='';
  entity_6 = (char*)malloc(14*sizeof(char));
  entity_6[14-1]='';
  entity_2 = 7;
  strcpy(entity_7, entity_5);
}