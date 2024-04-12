void fun()
{
  int entity_6 = 94;
  char* entity_2;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[64-1]='';
  memset(entity_3, 'J', entity_6-1);
  entity_3[entity_6-1]='';
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  entity_6 = 28;
  strcpy(entity_1, entity_3);
}