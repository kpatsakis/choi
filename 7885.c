void fun()
{
  int entity_3 = 81;
  int entity_9 = 90;
  int entity_0 = 81;
  int entity_4 = 72;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'p', entity_3-1);
  entity_6[entity_3-1]='';
  entity_7 = (char*)malloc(11*sizeof(char));
  entity_7[11-1]='';
  entity_3 = 33;
  strcpy(entity_7, entity_6);
}