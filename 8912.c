void fun()
{
  int entity_6 = 46;
  char entity_8[46] = "";
  entity_8 = NULL;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char entity_2 = 'r';
  char* entity_9;
  entity_9 = (char*)malloc(19*sizeof(char));
  entity_9[19-1]='';
  memset(entity_3, 'b', entity_6-1);
  entity_3[entity_6-1]='';
  memset(entity_8, 'S', 46-1);
  entity_8[46-1]='';
  entity_6 = 50;
  strcpy(entity_9, entity_3);
}