void fun()
{
  int entity_7 = 90;
  int entity_1 = 85;
  entity_1 = 94;
  char* entity_4;
  char entity_2[78] = "";
  entity_2 = NULL;
  memset(entity_2, 'U', 78-1);
  entity_2[78-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  strcpy(entity_4, entity_2);
}