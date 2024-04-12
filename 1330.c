void fun()
{
  int entity_2 = 78;
  char entity_3[12] = "";
  entity_3 = NULL;
  char* entity_9;
  char* entity_1;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[72-1]='';
  memset(entity_3, 'd', 12-1);
  entity_3[12-1]='';
  strcpy(entity_9, entity_3);
}