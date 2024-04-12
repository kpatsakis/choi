void fun()
{
  int entity_1 = 84;
  char* entity_4;
  char* entity_6;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(69*sizeof(char));
  entity_5[69-1]='';
  entity_6 = (char*)malloc(18*sizeof(char));
  entity_6[18-1]='';
  memset(entity_2, 'U', entity_1-1);
  entity_2[entity_1-1]='';
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[67-1]='';
  strcpy(entity_4, entity_2);
}