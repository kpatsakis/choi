void fun()
{
  int entity_6 = 82;
  char entity_7[62] = "";
  entity_7 = NULL;
  char entity_3 = 'l';
  char* entity_2;
  char entity_8[entity_6] = "";
  entity_8 = NULL;
  memset(entity_8, 'k', entity_6-1);
  entity_8[entity_6-1]='';
  memset(entity_7, 'h', 62-1);
  entity_7[62-1]='';
  entity_2 = (char*)malloc(89*sizeof(char));
  entity_2[89-1]='';
  entity_6 = 22;
  strcpy(entity_2, entity_8);
}