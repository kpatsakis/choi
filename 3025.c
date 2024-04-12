void fun()
{
  int entity_9 = 90;
  char entity_0[31] = "";
  entity_0 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_0, 's', 31-1);
  entity_0[31-1]='';
  entity_9 = 33;
  strcpy(entity_3, entity_0);
}