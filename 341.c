void fun()
{
  int entity_2 = 57;
  int entity_5 = 99;
  char entity_3[69] = "";
  entity_3 = NULL;
  char entity_8[23] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_8, 'b', 23-1);
  entity_8[23-1]='';
  memset(entity_3, 'O', 69-1);
  entity_3[69-1]='';
  entity_5 = 23;
  strcpy(entity_1, entity_3);
}