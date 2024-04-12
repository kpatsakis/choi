void fun()
{
  int entity_4 = 52;
  int entity_3 = 60;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(37*sizeof(char));
  entity_1[37-1]='';
  memset(entity_2, 'v', entity_4-1);
  entity_2[entity_4-1]='';
  entity_4 = 68;
  strcpy(entity_1, entity_2);
}