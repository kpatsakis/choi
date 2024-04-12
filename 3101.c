void fun()
{
  int entity_2 = 47;
  char* entity_8;
  char* entity_9;
  char entity_3[64] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(87*sizeof(char));
  entity_9[87-1]='';
  memset(entity_3, 'J', 64-1);
  entity_3[64-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  strcpy(entity_8, entity_3);
}