void fun()
{
  int entity_2 = 81;
  char* entity_3;
  char entity_4[76] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  entity_3 = (char*)malloc(70*sizeof(char));
  entity_3[70-1]='';
  entity_8 = (char*)malloc(77*sizeof(char));
  entity_8[77-1]='';
  memset(entity_1, 'W', entity_2-1);
  entity_1[entity_2-1]='';
  memset(entity_4, 'o', 76-1);
  entity_4[76-1]='';
  strcpy(entity_3, entity_1);
}