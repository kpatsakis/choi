void fun()
{
  int entity_8 = 78;
  int entity_0 = 32;
  int entity_6 = 27;
  int entity_2 = 90;
  entity_0 = 32;
  char* entity_7;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[50-1]='';
  memset(entity_1, 'U', entity_0-1);
  entity_1[entity_0-1]='';
  strcpy(entity_7, entity_1);
}