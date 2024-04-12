void fun()
{
  int entity_6 = 39;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char entity_7 = 'k';
  char* entity_1;
  char* entity_5;
  memset(entity_2, 'a', entity_6-1);
  entity_2[entity_6-1]='';
  entity_5 = (char*)malloc(90*sizeof(char));
  entity_5[90-1]='';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  strcpy(entity_5, entity_2);
}