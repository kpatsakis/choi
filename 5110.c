void fun()
{
  int entity_8 = 4;
  char entity_1[68] = "";
  entity_1 = NULL;
  char entity_4[49] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_0 = 'c';
  char* entity_2;
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  entity_5 = (char*)malloc(5*sizeof(char));
  entity_5[5-1]='';
  memset(entity_4, 'z', 49-1);
  entity_4[49-1]='';
  memset(entity_1, 'C', 68-1);
  entity_1[68-1]='';
  entity_8 = 67;
  strcpy(entity_2, entity_1);
}