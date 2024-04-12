void fun()
{
  int entity_9 = 90;
  int entity_4 = 59;
  char* entity_6;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char entity_8[87] = "";
  entity_8 = NULL;
  memset(entity_8, 'b', 87-1);
  entity_8[87-1]='';
  entity_6 = (char*)malloc(85*sizeof(char));
  entity_6[85-1]='';
  memset(entity_0, 'i', entity_9-1);
  entity_0[entity_9-1]='';
  strcpy(entity_6, entity_0);
}