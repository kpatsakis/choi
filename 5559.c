void fun()
{
  int entity_1 = 50;
  entity_1 = 30;
  char entity_0[68] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memset(entity_0, 'q', 68-1);
  entity_0[68-1]='';
  strcpy(entity_6, entity_0);
}