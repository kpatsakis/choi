void fun()
{
  int entity_6 = 38;
  char* entity_4;
  char entity_0 = 'F';
  char entity_1[40] = "";
  entity_1 = NULL;
  char entity_3 = 'L';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_1, 's', 40-1);
  entity_1[40-1]='';
  entity_6 = 72;
  strcpy(entity_4, entity_1);
}