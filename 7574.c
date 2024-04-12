void fun()
{
  int entity_8 = 85;
  int entity_2 = 35;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'o', entity_8-1);
  entity_6[entity_8-1]='';
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[24-1]='';
  entity_8 = 10;
  strcpy(entity_4, entity_6);
}