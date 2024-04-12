void fun()
{
  int entity_3 = 94;
  char* entity_5;
  char* entity_6;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'A', entity_3-1);
  entity_9[entity_3-1]='';
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[90-1]='';
  entity_6 = (char*)malloc(100*sizeof(char));
  entity_6[100-1]='';
  memcpy(entity_6, entity_9, entity_3*sizeof(char));
}