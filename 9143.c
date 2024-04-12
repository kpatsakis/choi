void fun()
{
  int entity_9 = 4;
  int entity_0 = 56;
  char entity_4[16] = "";
  entity_4 = NULL;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  char* entity_1;
  char* entity_6;
  entity_1 = (char*)malloc(91*sizeof(char));
  entity_1[91-1]='';
  memset(entity_7, 'e', entity_9-1);
  entity_7[entity_9-1]='';
  memset(entity_4, 'O', 16-1);
  entity_4[16-1]='';
  entity_6 = (char*)malloc(34*sizeof(char));
  entity_6[34-1]='';
  entity_9 = 32;
  strcpy(entity_6, entity_7);
}