void fun()
{
  int entity_7 = 91;
  char entity_3[89] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_3, 'c', 89-1);
  entity_3[89-1]='';
  memcpy(entity_5, entity_3, 89*sizeof(char));
}