void fun()
{
  int entity_8 = 45;
  entity_8 = 20;
  char* entity_9;
  char* entity_7;
  char entity_2[36] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_7 = (char*)malloc(91*sizeof(char));
  entity_7[91-1]='';
  memset(entity_2, 'b', 36-1);
  entity_2[36-1]='';
  strcpy(entity_9, entity_2);
}