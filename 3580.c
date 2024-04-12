void fun()
{
  int entity_7 = 24;
  entity_7 = 80;
  char entity_0[36] = "";
  entity_0 = NULL;
  char* entity_5;
  char* entity_3;
  char* entity_1;
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  memset(entity_0, 'o', 36-1);
  entity_0[36-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  strcpy(entity_1, entity_0);
}