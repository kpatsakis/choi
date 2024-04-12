void fun()
{
  int entity_3 = 53;
  int entity_7 = 7;
  entity_3 = 53;
  char* entity_5;
  char* entity_1;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char entity_0[70] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(78*sizeof(char));
  entity_5[78-1]='';
  memset(entity_0, 'm', 70-1);
  entity_0[70-1]='';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[82-1]='';
  memset(entity_6, 'R', entity_3-1);
  entity_6[entity_3-1]='';
  strcpy(entity_1, entity_6);
}