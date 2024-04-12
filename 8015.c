void fun()
{
  int entity_7 = 10;
  entity_7 = 10;
  char entity_5 = 'R';
  char* entity_2;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'B', entity_7-1);
  entity_8[entity_7-1]='';
  entity_6 = (char*)malloc(53*sizeof(char));
  entity_6[53-1]='';
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[3-1]='';
  strcpy(entity_2, entity_8);
}