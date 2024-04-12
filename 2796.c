void fun()
{
  int entity_9 = 15;
  char* entity_3;
  char entity_6[77] = "";
  entity_6 = NULL;
  char entity_5[69] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_5, 'U', 69-1);
  entity_5[69-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_6, 'e', 77-1);
  entity_6[77-1]='';
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[90-1]='';
  strcpy(entity_3, entity_5);
}