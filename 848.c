void fun()
{
  int entity_2 = 52;
  entity_2 = 52;
  char* entity_1;
  char* entity_7;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  memset(entity_5, 'C', entity_2-1);
  entity_5[entity_2-1]='';
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[88-1]='';
  strcpy(entity_7, entity_5);
}