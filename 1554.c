void fun()
{
  int entity_0 = 34;
  int entity_7 = 58;
  entity_7 = 43;
  char* entity_4;
  char* entity_5;
  char entity_3[43] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_3, 'y', 43-1);
  entity_3[43-1]='';
  entity_4 = (char*)malloc(50*sizeof(char));
  entity_4[50-1]='';
  strcpy(entity_5, entity_3);
}