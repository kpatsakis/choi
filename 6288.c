void fun()
{
  int entity_0 = 83;
  int entity_9 = 80;
  char* entity_3;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char entity_6[0] = "";
  entity_6 = NULL;
  memset(entity_7, 'g', entity_9-1);
  entity_7[entity_9-1]='';
  memset(entity_6, 'x', 0-1);
  entity_6[0-1]='';
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[40-1]='';
  memcpy(entity_3, entity_7, entity_9*sizeof(char));
}