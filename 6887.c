void fun()
{
  int entity_3 = 41;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  char* entity_2;
  memset(entity_7, 'b', entity_3-1);
  entity_7[entity_3-1]='';
  entity_2 = (char*)malloc(78*sizeof(char));
  entity_2[78-1]='';
  entity_3 = 68;
  strcpy(entity_2, entity_7);
}