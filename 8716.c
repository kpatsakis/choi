void fun()
{
  int entity_5 = 85;
  int entity_8 = 91;
  entity_5 = 85;
  char* entity_7;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(30*sizeof(char));
  entity_2[30-1]='';
  entity_7 = (char*)malloc(18*sizeof(char));
  entity_7[18-1]='';
  memset(entity_3, 'N', entity_5-1);
  entity_3[entity_5-1]='';
  strcpy(entity_2, entity_3);
}