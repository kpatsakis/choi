void fun()
{
  int entity_9 = 59;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  memset(entity_0, 's', entity_9-1);
  entity_0[entity_9-1]='';
  strcpy(entity_3, entity_0);
}