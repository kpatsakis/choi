void fun()
{
  int entity_1 = 25;
  char* entity_7;
  char* entity_0;
  char entity_6[56] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(3*sizeof(char));
  entity_7[3-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_6, 'K', 56-1);
  entity_6[56-1]='';
  entity_1 = 78;
  strcpy(entity_0, entity_6);
}