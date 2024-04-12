void fun()
{
  int entity_5 = 91;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_7;
  char* entity_3;
  entity_7 = (char*)malloc(100*sizeof(char));
  entity_7[100-1]='';
  memset(entity_9, 'j', entity_5-1);
  entity_9[entity_5-1]='';
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[22-1]='';
  strcpy(entity_7, entity_9);
}