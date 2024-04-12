void fun()
{
  int entity_3 = 59;
  int entity_1 = 49;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  char* entity_5;
  char* entity_2;
  memset(entity_8, 'p', entity_1-1);
  entity_8[entity_1-1]='';
  entity_2 = (char*)malloc(44*sizeof(char));
  entity_2[44-1]='';
  entity_5 = (char*)malloc(67*sizeof(char));
  entity_5[67-1]='';
  strcpy(entity_5, entity_8);
}