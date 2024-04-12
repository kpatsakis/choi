void fun()
{
  int entity_2 = 44;
  int entity_1 = 2;
  entity_2 = 44;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char entity_3[9] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_5, 'Y', entity_2-1);
  entity_5[entity_2-1]='';
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[90-1]='';
  memset(entity_3, 'd', 9-1);
  entity_3[9-1]='';
  strcpy(entity_8, entity_5);
}