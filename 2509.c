void fun()
{
  int entity_3 = 59;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_0;
  char entity_7[53] = "";
  entity_7 = NULL;
  char* entity_1;
  char* entity_9;
  memset(entity_5, 'C', entity_3-1);
  entity_5[entity_3-1]='';
  entity_1 = (char*)malloc(40*sizeof(char));
  entity_1[40-1]='';
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[2-1]='';
  memset(entity_7, 'Y', 53-1);
  entity_7[53-1]='';
  entity_9 = (char*)malloc(50*sizeof(char));
  entity_9[50-1]='';
  entity_3 = 46;
  strcpy(entity_0, entity_5);
}