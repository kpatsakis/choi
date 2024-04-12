void fun()
{
  int entity_3 = 49;
  int entity_8 = 15;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_4[68] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(31*sizeof(char));
  entity_1[31-1]='';
  memset(entity_4, 'c', 68-1);
  entity_4[68-1]='';
  memset(entity_9, 'V', entity_3-1);
  entity_9[entity_3-1]='';
  entity_3 = 60;
  memcpy(entity_1, entity_9, entity_3*sizeof(char));
}