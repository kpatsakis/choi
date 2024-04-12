void fun()
{
  int entity_0 = 100;
  entity_0 = 100;
  char* entity_8;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[54-1]='';
  entity_8 = (char*)malloc(100*sizeof(char));
  entity_8[100-1]='';
  memset(entity_3, 'D', entity_0-1);
  entity_3[entity_0-1]='';
  strcpy(entity_8, entity_3);
}