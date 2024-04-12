void fun()
{
  int entity_6 = 85;
  char* entity_0;
  char* entity_4;
  char* entity_2;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  char entity_1 = 'p';
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[67-1]='';
  entity_0 = (char*)malloc(90*sizeof(char));
  entity_0[90-1]='';
  memset(entity_7, 'b', entity_6-1);
  entity_7[entity_6-1]='';
  entity_2 = (char*)malloc(73*sizeof(char));
  entity_2[73-1]='';
  strcpy(entity_2, entity_7);
}