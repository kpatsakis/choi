void fun()
{
  int entity_2 = 7;
  char* entity_0;
  char* entity_5;
  char entity_7[26] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[9-1]='';
  memset(entity_7, 'J', 26-1);
  entity_7[26-1]='';
  strcpy(entity_0, entity_7);
}