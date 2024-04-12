void fun()
{
  int entity_1 = 78;
  entity_1 = 35;
  char* entity_2;
  char* entity_8;
  char entity_6[41] = "";
  entity_6 = NULL;
  memset(entity_6, 'w', 41-1);
  entity_6[41-1]='';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  strcpy(entity_2, entity_6);
}