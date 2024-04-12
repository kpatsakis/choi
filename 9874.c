void fun()
{
  int entity_1 = 92;
  int entity_4 = 60;
  int entity_7 = 56;
  char* entity_5;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', entity_7-1);
  entity_2[entity_7-1]='';
  entity_5 = (char*)malloc(87*sizeof(char));
  entity_5[87-1]='';
  memcpy(entity_5, entity_2, entity_7*sizeof(char));
}