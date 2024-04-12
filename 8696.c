void fun()
{
  int entity_5 = 82;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_1;
  char* entity_2;
  entity_1 = (char*)malloc(61*sizeof(char));
  entity_1[61-1]='';
  entity_2 = (char*)malloc(42*sizeof(char));
  entity_2[42-1]='';
  memset(entity_3, 'w', entity_5-1);
  entity_3[entity_5-1]='';
  strcpy(entity_1, entity_3);
}