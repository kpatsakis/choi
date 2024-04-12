void fun()
{
  int entity_7 = 40;
  int entity_5 = 91;
  int entity_6 = 18;
  char* entity_4;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  entity_4 = (char*)malloc(45*sizeof(char));
  entity_4[45-1]='';
  memset(entity_2, 'A', entity_5-1);
  entity_2[entity_5-1]='';
  strcpy(entity_4, entity_2);
}