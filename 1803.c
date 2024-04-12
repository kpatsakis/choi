void fun()
{
  int entity_2 = 65;
  char entity_6 = 'w';
  char* entity_8;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  memset(entity_4, 'o', entity_2-1);
  entity_4[entity_2-1]='';
  entity_2 = 55;
  strcpy(entity_8, entity_4);
}