void fun()
{
  int entity_9 = 80;
  char* entity_4;
  char* entity_1;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'X', entity_9-1);
  entity_3[entity_9-1]='';
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[78-1]='';
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[16-1]='';
  strcpy(entity_4, entity_3);
}