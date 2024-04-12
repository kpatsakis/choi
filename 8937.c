void fun()
{
  int entity_7 = 63;
  char* entity_5;
  char entity_3[25] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(45*sizeof(char));
  entity_4[45-1]='';
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_3, 'G', 25-1);
  entity_3[25-1]='';
  entity_7 = 82;
  strcpy(entity_5, entity_3);
}