void fun()
{
  int entity_5 = 61;
  entity_5 = 1;
  char entity_3[90] = "";
  entity_3 = NULL;
  char* entity_7;
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_3, 'j', 90-1);
  entity_3[90-1]='';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  strcpy(entity_0, entity_3);
}