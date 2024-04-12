void fun()
{
  int entity_2 = 18;
  int entity_8 = 40;
  char* entity_4;
  char entity_1 = 'M';
  char* entity_3;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(33*sizeof(char));
  entity_3[33-1]='';
  memset(entity_7, 'o', entity_8-1);
  entity_7[entity_8-1]='';
  entity_4 = (char*)malloc(97*sizeof(char));
  entity_4[97-1]='';
  strcpy(entity_4, entity_7);
}