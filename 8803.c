void fun()
{
  int entity_5 = 21;
  int entity_9 = 10;
  int entity_2 = 41;
  char* entity_3;
  char* entity_0;
  char entity_1[18] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(87*sizeof(char));
  entity_0[87-1]='';
  memset(entity_1, 'z', 18-1);
  entity_1[18-1]='';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  strcpy(entity_3, entity_1);
}