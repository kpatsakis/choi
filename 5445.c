void fun()
{
  int entity_9 = 76;
  int entity_0 = 21;
  char* entity_7;
  char* entity_1;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_1 = (char*)malloc(66*sizeof(char));
  entity_1[66-1]='';
  entity_7 = (char*)malloc(34*sizeof(char));
  entity_7[34-1]='';
  memset(entity_6, 'm', entity_9-1);
  entity_6[entity_9-1]='';
  strcpy(entity_1, entity_6);
}