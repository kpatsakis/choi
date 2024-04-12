void fun()
{
  int entity_5 = 4;
  char entity_8[43] = "";
  entity_8 = NULL;
  char* entity_3;
  char* entity_4;
  memset(entity_8, 'c', 43-1);
  entity_8[43-1]='';
  entity_3 = (char*)malloc(90*sizeof(char));
  entity_3[90-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  strcpy(entity_4, entity_8);
}