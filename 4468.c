void fun()
{
  int entity_7 = 100;
  char entity_6 = 'k';
  char entity_4[18] = "";
  entity_4 = NULL;
  char* entity_0;
  char* entity_3;
  memset(entity_4, 'Q', 18-1);
  entity_4[18-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  entity_3 = (char*)malloc(71*sizeof(char));
  entity_3[71-1]='';
  entity_7 = 43;
  strcpy(entity_0, entity_4);
}