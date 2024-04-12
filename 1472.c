void fun()
{
  int entity_9 = 58;
  char entity_3[7] = "";
  entity_3 = NULL;
  char* entity_1;
  char* entity_8;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_3, 'q', 7-1);
  entity_3[7-1]='';
  entity_8 = (char*)malloc(68*sizeof(char));
  entity_8[68-1]='';
  entity_9 = 37;
  strcpy(entity_1, entity_3);
}