void fun()
{
  int entity_7 = 73;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_0;
  char* entity_5;
  entity_5 = (char*)malloc(29*sizeof(char));
  entity_5[29-1]='';
  entity_0 = (char*)malloc(28*sizeof(char));
  entity_0[28-1]='';
  memset(entity_8, 'm', entity_7-1);
  entity_8[entity_7-1]='';
  entity_7 = 100;
  strcpy(entity_0, entity_8);
}