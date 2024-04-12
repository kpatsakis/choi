void fun()
{
  int entity_5 = 85;
  int entity_6 = 60;
  char* entity_0;
  char* entity_3;
  char entity_2[8] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[19-1]='';
  memset(entity_2, 'R', 8-1);
  entity_2[8-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  entity_5 = 2;
  strcpy(entity_0, entity_2);
}