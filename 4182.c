void fun()
{
  int entity_6 = 70;
  int entity_8 = 28;
  entity_8 = 16;
  char* entity_2;
  char entity_3[69] = "";
  entity_3 = NULL;
  char entity_5[49] = "";
  entity_5 = NULL;
  memset(entity_5, 't', 49-1);
  entity_5[49-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  memset(entity_3, 'T', 69-1);
  entity_3[69-1]='';
  strcpy(entity_2, entity_3);
}