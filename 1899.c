void fun()
{
  int entity_9 = 48;
  entity_9 = 25;
  char entity_3[86] = "";
  entity_3 = NULL;
  char* entity_0;
  char* entity_6;
  entity_0 = (char*)malloc(entity_9*sizeof(char));
  entity_0[entity_9-1]='';
  entity_6 = (char*)malloc(50*sizeof(char));
  entity_6[50-1]='';
  memset(entity_3, 'o', 86-1);
  entity_3[86-1]='';
  strcpy(entity_0, entity_3);
}