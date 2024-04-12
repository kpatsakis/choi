void fun()
{
  int entity_9 = 54;
  int entity_6 = 60;
  char entity_2[10] = "";
  entity_2 = NULL;
  char entity_8 = 'N';
  char* entity_1;
  memset(entity_2, 'B', 10-1);
  entity_2[10-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  entity_6 = 16;
  strcpy(entity_1, entity_2);
}