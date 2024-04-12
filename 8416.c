void fun()
{
  int entity_1 = 58;
  int entity_6 = 32;
  char* entity_5;
  char entity_9[17] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(13*sizeof(char));
  entity_0[13-1]='';
  memset(entity_9, 'G', 17-1);
  entity_9[17-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  strcpy(entity_5, entity_9);
}