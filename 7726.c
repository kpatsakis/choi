void fun()
{
  int entity_0 = 90;
  entity_0 = 66;
  char* entity_6;
  char entity_9[34] = "";
  entity_9 = NULL;
  char entity_2 = 'y';
  char* entity_1;
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[16-1]='';
  memset(entity_9, 'B', 34-1);
  entity_9[34-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  strcpy(entity_1, entity_9);
}