void fun()
{
  int entity_4 = 68;
  entity_4 = 68;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char* entity_1;
  memset(entity_2, 'w', entity_4-1);
  entity_2[entity_4-1]='';
  entity_1 = (char*)malloc(62*sizeof(char));
  entity_1[62-1]='';
  strcpy(entity_1, entity_2);
}