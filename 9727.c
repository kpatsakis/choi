void fun()
{
  int entity_2 = 100;
  char entity_6 = 'z';
  char entity_7 = 'd';
  char* entity_3;
  char* entity_9;
  char entity_1[38] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(69*sizeof(char));
  entity_3[69-1]='';
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[entity_2-1]='';
  memset(entity_1, 'U', 38-1);
  entity_1[38-1]='';
  strcpy(entity_9, entity_1);
}