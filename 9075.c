void fun()
{
  int entity_9 = 95;
  char* entity_8;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  char* entity_3;
  char* entity_7;
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[38-1]='';
  memset(entity_1, 'I', entity_9-1);
  entity_1[entity_9-1]='';
  entity_7 = (char*)malloc(61*sizeof(char));
  entity_7[61-1]='';
  entity_8 = (char*)malloc(10*sizeof(char));
  entity_8[10-1]='';
  strcpy(entity_8, entity_1);
}