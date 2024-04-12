void fun()
{
  int entity_1 = 29;
  int entity_7 = 41;
  char* entity_5;
  char entity_9 = 'n';
  char entity_8[69] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(71*sizeof(char));
  entity_3[71-1]='';
  memset(entity_8, 't', 69-1);
  entity_8[69-1]='';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  strcpy(entity_5, entity_8);
}