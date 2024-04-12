void fun()
{
  int entity_8 = 33;
  int entity_0 = 81;
  int entity_6 = 27;
  entity_6 = 27;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_3;
  memset(entity_7, 'T', entity_6-1);
  entity_7[entity_6-1]='';
  entity_3 = (char*)malloc(35*sizeof(char));
  entity_3[35-1]='';
  entity_5 = (char*)malloc(10*sizeof(char));
  entity_5[10-1]='';
  strcpy(entity_5, entity_7);
}