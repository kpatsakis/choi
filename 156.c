void fun()
{
  int entity_9 = 5;
  int entity_7 = 46;
  int entity_6 = 86;
  char* entity_3;
  char* entity_8;
  char entity_4[94] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[97-1]='';
  memset(entity_4, 'O', 94-1);
  entity_4[94-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  strcpy(entity_3, entity_4);
}