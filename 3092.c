void fun()
{
  int entity_7 = 68;
  int entity_0 = 61;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_9;
  char* entity_3;
  memset(entity_8, 'J', entity_7-1);
  entity_8[entity_7-1]='';
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  entity_9 = (char*)malloc(42*sizeof(char));
  entity_9[42-1]='';
  strcpy(entity_3, entity_8);
}