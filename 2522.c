void fun()
{
  int entity_8 = 81;
  int entity_4 = 39;
  char* entity_7;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  memset(entity_2, 'p', entity_8-1);
  entity_2[entity_8-1]='';
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[54-1]='';
  entity_8 = 23;
  strcpy(entity_3, entity_2);
}