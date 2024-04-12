void fun()
{
  int entity_7 = 12;
  char entity_5[97] = "";
  entity_5 = NULL;
  char entity_0 = 'A';
  char* entity_3;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[68-1]='';
  memset(entity_5, 'E', 97-1);
  entity_5[97-1]='';
  memset(entity_6, 'D', entity_7-1);
  entity_6[entity_7-1]='';
  strcpy(entity_3, entity_6);
}