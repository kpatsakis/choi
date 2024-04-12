void fun()
{
  int entity_1 = 67;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_7;
  char* entity_8;
  memset(entity_0, 'y', entity_1-1);
  entity_0[entity_1-1]='';
  entity_7 = (char*)malloc(5*sizeof(char));
  entity_7[5-1]='';
  entity_8 = (char*)malloc(25*sizeof(char));
  entity_8[25-1]='';
  entity_1 = 54;
  strcpy(entity_7, entity_0);
}